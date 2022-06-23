/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:42:27 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/23 18:22:31 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook() 
{
    // std::cout << "PhoneBook destroyed" << std::endl;
}

int PhoneBook::add(int nb)
{
    int i = 0;
    
    i = nb % 8;
    if (nb > 7)
        contact[i].clear_contact();
    this->contact[i] = this->contact[i].fill_infos();
    return (0);
}

void    PhoneBook::search()
{
    int i = 0;
    int index = 0;

    while (i < 8)
    {
        if (contact[i].get_firstname().empty())
            i++;
        else 
        {
            std::cout << std::setw(10) << i;
            std::cout << "|";
            if (contact[i].get_firstname().length() > 9)
                std::cout << std::setw(9) << contact[i].get_firstname().substr(0, 9) << ".";
            else 
                std::cout << std::setw(10) << contact[i].get_firstname();
            std::cout << "|";
            if (contact[i].get_lastname().length() > 9)
                std::cout << std::setw(9) << contact[i].get_lastname().substr(0, 9) << ".";
            else 
                std::cout << std::setw(10) << contact[i].get_lastname();
            std::cout << "|";
            if (contact[i].get_nickname().length() > 9)
                std::cout << std::setw(9) << contact[i].get_nickname().substr(0, 9) << ".";
            else 
                std::cout << std::setw(10) << contact[i].get_nickname();
            std::cout << std::endl << std::endl;
        }
        i++;
    }
    std::cout << "Which contact do you want to see ? ";
    if ( !(std::cin >> index)|| index < 0 || index > ((nb - 1) % 8) || index > 8 )
        std::cout << "That is not a valid index" << std::endl;
    else
    {
        std::cout << std::endl << "Contact number " << index << "  :" << std::endl;
        std::cout << "First name        : ";
        std::cout << contact[index].get_firstname() << std::endl;
        std::cout << "Last name         : ";
        std::cout << contact[index].get_lastname() << std::endl;
        std::cout << "Nickname          : ";
        std::cout << contact[index].get_nickname() << std::endl;
        std::cout << "Phone number      : ";
        std::cout << contact[index].get_number() << std::endl;
        std::cout << "Darkest secret    : ";
        std::cout << contact[index].get_secret() << std::endl;
    }
    std::cin.clear();
}