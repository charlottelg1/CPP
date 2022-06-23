/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:42:07 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/23 18:15:22 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook   repertoire;
    std::string str;

    repertoire.nb = 0;
    std::cout << "Welcome to MyAwesomePhoneBook" << std::endl << std::endl;
    std::cout << "You can ADD, SEARCH or EXIT" << std::endl;
    while ((getline(std::cin, str)))
    {
        if (std::cin.eof())
            return (0);
        if (str == "ADD")
        {
            std::cout << std::endl;
            repertoire.add(repertoire.nb);
            repertoire.nb++;
            std::cout << std::endl << "You can ADD, SEARCH or EXIT" << std::endl;
        }
        else if (str == "SEARCH")
        {
            if (repertoire.nb == 0)
                std::cout << "You cannot search an empty PhoneBook" << std::endl;
            else
            {
                std::cout << std::endl;
                repertoire.search();
            }
            std::cout << std::endl << "You can ADD, SEARCH or EXIT" << std::endl;
        }
        else if (str == "EXIT")
            return(0);
        std::cin.clear();
    }
    return (0);
}
