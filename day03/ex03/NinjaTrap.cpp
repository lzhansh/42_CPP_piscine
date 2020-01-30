/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:49:52 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:40:01 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap() {
	ClapTrap::setAttr("NJ4G-TP", 60, 60, 120, 120, 1, 60, 5, 0);
	std::cout << "NJ4G-TP Default " << this->name << " is constructed" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string n) {
	ClapTrap::setAttr(n, 60, 60, 120, 120, 1, 60, 5, 0);
	std::cout << "NJ4G-TP " << this->name << " is constructed" << std::endl;
	return ;
}


NinjaTrap::~NinjaTrap() {
	std::cout << "NJ4G-TP " << this->name << " is destroyed" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap &var) {
	*this = var;
	std::cout << "NJ4G-TP copy constructer called for "<< this->name << std::endl;
	return ;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &var) {
	ClapTrap::operator=(var);
	std::cout << "NJ4G-TP assigning operator is called for " << this->name <<std::endl;
	return (*this);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &obj) {
	std::cout << "NJ4G-TP: don't have any imagination but to print" << this->name << " and " << obj.name << std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap &obj) {
	std::cout << "NJ4G-TP: don't have any imagination but to print" << this->name << " and " << obj.name << std::endl;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &obj) {
	std::cout << "NJ4G-TP: don't have any imagination but to print" << this->name << " and " << obj.name << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &obj) {
	std::cout << "NJ4G-TP: don't have any imagination but to print" << this->name << " and " << obj.name << std::endl;
}