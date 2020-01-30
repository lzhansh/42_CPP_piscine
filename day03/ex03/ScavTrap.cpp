/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:38:14 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:08:02 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap() {
	ClapTrap::setAttr("ST4G-TP", 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "ST4G-TP Default " << this->name << " is constructed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string n) {
	ClapTrap::setAttr(n, 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "ST4G-TP " << this->name << " is constructed" << std::endl;
	return ;
}


ScavTrap::~ScavTrap() {
	std::cout << "ST4G-TP " << this->name << " is destroyed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &var) {
	*this = var;
	std::cout << "ST4G-TP copy constructer called for "<< this->name << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &var) {
	ClapTrap::operator=(var);
	std::cout << "ST4G-TP assigning operator is called for " << this->name <<std::endl;
	return (*this);
}

void	ScavTrap::challengeNewcomer()
{
	std::string challenges[5] = {"Run naked!", "Catch the tiger", "Push up 100 times!", "Sniff dry pepper powder", "Dance on your hands"};

	srand(time(NULL));
	std::cout << "ST4G-TP Challenge for the newcomer is " << challenges[rand() % 5] << ". You have a choice: To do OR To do." <<  std::endl;
}
