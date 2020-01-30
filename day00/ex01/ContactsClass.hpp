/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:07:54 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 09:12:49 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include <string>

class Contacts {

	public: 
		
		Contacts(void);
		~Contacts(void);

		void		set_contact(std::string s, int i);
		std::string	get_contact(int i);

	private:

		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string	   _login;
		std::string	   _postal;
		std::string	   _email;
		std::string	   _phone;
		std::string	   _b_date;
		std::string	   _fav_meal;
		std::string	   _underwear_color;
		std::string	   _secret;
};

#endif
