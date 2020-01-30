/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:29:33 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 17:15:07 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string str) : name(str) {
	return ;
}

HumanB::~HumanB() {
}

void HumanB::attack() {
	
	std::cout << this->name << " attacks with his " << this->a->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w) {
	
	this->a = &w;
}
