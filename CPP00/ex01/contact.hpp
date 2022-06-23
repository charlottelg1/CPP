/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:42:47 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/15 19:05:23 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class   Contact
{
	public:
		Contact();
		~Contact();
		int 		id;
		Contact		fill_infos(void);
		void  		set_firstname(std::string str);
		std::string	get_firstname() const;
		void  		set_lastname(std::string str);
		std::string	get_lastname() const;
		void  		set_nickname(std::string str);
		std::string	get_nickname() const;
		void		set_number(std::string str);
		std::string	get_number() const;
		void  		set_secret(std::string str);
		std::string	get_secret() const;
		void		clear_contact();

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string secret;
};

#endif
