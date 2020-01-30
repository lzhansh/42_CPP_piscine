/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:51:26 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 12:52:09 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {
	
	announce();
	return;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is destroyed." << std::endl;
	return;
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
