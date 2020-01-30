/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:23:20 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 17:17:20 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s) {
	this->type = s;
	return ;
}

Weapon::~Weapon() {
}

std::string &Weapon::getType() {

	return (this->type);
}

void Weapon::setType(std::string t) {
	this->type = t;
	std::cout << "Type is changed to <<" << this->type << ">>" << std::endl;
}
