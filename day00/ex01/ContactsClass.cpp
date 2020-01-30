/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:15:08 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 09:12:17 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactsClass.hpp"
#include <string>

Contacts::Contacts(void) {

	return;
}

Contacts::~Contacts(void) {

	return;
}

void	Contacts::set_contact(std::string s, int i) {

	switch (i)
	{
		case 0:
			this->_first_name = s;
		case 1:
			this->_last_name = s;
		case 2:
			this->_nickname = s;
		case 3:
			this->_login = s;
		case 4:
			this->_postal = s;
		case 5:
			this->_email = s;
		case 6:
			this->_phone = s;
		case 7:
			this->_b_date = s;
		case 8:
			this->_fav_meal = s;
		case 9:
			this->_underwear_color = s;
		case 10:
			this->_secret = s;
	}
}

std::string Contacts::get_contact(int i) {

	switch (i)
	{
		case 0:
			return (this->_first_name);
		case 1:
			return (this->_last_name);
		case 2:
			return (this->_nickname);
		case 3:
			return (this->_login);
		case 4:
			return (this->_postal);
		case 5:
			return (this->_email);
		case 6:
			return (this->_phone);
		case 7:
			return (this->_b_date);
		case 8:
			return (this->_fav_meal);
		case 9:
			return (this->_underwear_color);
		case 10:
			return (this->_secret);
	}
	return (NULL);
}











