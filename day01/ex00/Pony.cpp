/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:20:15 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 10:23:23 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string const &name) : _name(name) {

	std::cout << "Pony " << this->_name << " is created." << std::endl;
	return;
}

Pony::~Pony(void) {

	std::cout << "Pony " << this->_name << " is destroyed." << std::endl;
	return;
}

/*std::string const Pony::*getName() const
{
	return &(this->_name);
}*/
