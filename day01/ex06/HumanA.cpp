/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:29:33 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 17:06:28 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string str, Weapon &weap) : name(str), a(weap) {
	return ;
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->a.getType() << std::endl;
}
