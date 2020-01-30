/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:49:52 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:12:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap() {
	ClapTrap::setAttr("FR4G-TP", 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "FR4G-TP Default " << this->name << " is constructed" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string n) {
	ClapTrap::setAttr(n, 100, 100, 100, 100, 1, 30, 20, 5);
	std::cout << "FR4G-TP " << this->name << " is constructed" << std::endl;
	return ;
}


FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->name << " is destroyed" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap &var) {
	*this = var;
	std::cout << "FR4G-TP copy constructer called for "<< this->name << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &var) {
	ClapTrap::operator=(var);
	std::cout << "FR4G-TP assigning operator is called for " << this->name <<std::endl;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attacks[5] = {"Bite", "Shred", "Wreck", "Shockwave", "Agony"};
	int i;

	if (ClapTrap::getEn() < 25)
	{
		std::cout << "FR4G-TP " << this->name << " does not have enough energy to attack. Current energy is "<< ClapTrap::getEn() <<std::endl;
		return;
	}
	ClapTrap::setEn(ClapTrap::getEn() - 25);
	srand(time(NULL));
	i = rand() % 5;
	std::cout << "FR4G-TP " << this->name << " attacks " << target <<" by VaultHunter: " << attacks[i] << std::endl;
}

