/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:45:09 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/12 18:48:30 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char**av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            av[i][j] = std::toupper(av[i][j]);
            j++;
        }
        std::cout << av[i];
        i++;
    }
    std::cout << std::endl;
    return (0);
}
