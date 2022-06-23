/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:42:32 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/15 19:05:17 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class	PhoneBook
{
	public :
		PhoneBook();
		~PhoneBook();
		int		nb;
		Contact	contact[8];
		int		add(int nb);
		void	search(void);
};

#endif 
