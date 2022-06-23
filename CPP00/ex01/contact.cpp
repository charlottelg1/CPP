/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:42:40 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/23 18:15:46 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact created" << std::endl;
}

Contact::~Contact() 
{
    // std::cout << "Contact destroyed" << std::endl;
}

Contact    Contact::fill_infos(void)
{
    std::string str;
    
    while (firstname.empty())
    {
        std::cout << "First name            : ";
        getline(std::cin, str);
        set_firstname(str);
        if (std::cin.eof())
            return (*this);
        std::cin.clear();
    }
    while (lastname.empty())
    {
        std::cout << "Last name             : ";
        getline(std::cin, str);
        set_lastname(str);
        if (std::cin.eof())
            return (*this);
        std::cin.clear();
    }
    while (nickname.empty())
    {
        std::cout << "Nickname              : ";
        getline(std::cin, str);
        set_nickname(str);
        if (std::cin.eof())
            return (*this);
        std::cin.clear();
    }
    while (number.empty())
    {
        std::cout << "Your phone number     : ";
        getline(std::cin, str);
        set_number(str);
        if (std::cin.eof())
            return (*this);
        std::cin.clear();
    }
    while (secret.empty())
    {
        std::cout << "Your darkest secret   : ";
        getline(std::cin, str);
        set_secret(str);
        if (std::cin.eof())
            return (*this);
        std::cin.clear();
    }
    return (*this);
}

void Contact::clear_contact(void)
{
    firstname.clear();
    lastname.clear();
    nickname.clear();
    number.clear();
    secret.clear();
}

void Contact::set_firstname(std::string str)
{
    this->firstname = str;
}

void Contact::set_lastname(std::string str)
{
    this->lastname = str;
}

void Contact::set_nickname(std::string str)
{
    this->nickname = str;
}

void Contact::set_number(std::string str)
{
    this->number = str;
}

void Contact::set_secret(std::string str)
{
    this->secret = str;
}

std::string	Contact::get_firstname() const
{
    return (this->firstname);
}

std::string	Contact::get_lastname() const
{
    return (this->lastname);
}

std::string	Contact::get_nickname() const
{
    return (this->lastname);
}

std::string	Contact::get_number() const
{
    return (this->number);
}

std::string	Contact::get_secret() const
{
    return (this->secret);
}