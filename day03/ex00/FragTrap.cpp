/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:49:52 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/16 15:47:55 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap() : _hit(100), _max_hit(100), _energy(100), _max_energy(100), _lvl(1), _name("Default"), _matt(30), _ratt(20), _ardam(5) {
	std::cout << "FR4G-TP " << this->_name << "Constructed" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string n) : _hit(100), _max_hit(100), _energy(100), _max_energy(100), _lvl(1), _name(n), _matt(30), _ratt(20), _ardam(5) {
	std::cout << "FR4G-TP " << this->_name << "constructed" << std::endl;
	return ;
}


FragTrap::~FragTrap() {
	std::cout << "Destroyed" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap &var) {
	*this = var;
	std::cout << "Copy constructer called for "<< this->_name << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &var) {
	this->_hit = var._hit;
	this->_max_hit = var._max_hit;
	this->_energy = var._energy;
	this->_max_energy = var._max_energy;
	this->_lvl = var._lvl;
	this->_name = var._name;
	this->_matt = var._matt;
	this->_ratt = var._ratt;
	this->_ardam = var._ardam;
	std::cout << "Assigning operator is called for " << this->_name <<std::endl;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ratt << " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_matt << " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (amount > (unsigned int)this->_ardam)
	{
	 	amount -= this->_ardam;
		this->_ardam = 0;
	}
	else
	{
		this->_ardam -= amount;
		amount = 0;
	}
	this->_hit = this->_hit - amount;
	if (this->_hit < 0)
		this->_hit = 0;
	std::cout << "FR4G-TP " << this->_name << " is damaged to " << amount << " points. Current armor: " << this->_ardam << "; and HP: " << this->_hit <<"." <<std::endl;
	if (this->_hit == 0)
		std::cout << "FR4G-TP " << this->_name << " is dead. T_T\n" << std::endl; 
}

void	FragTrap::beRepaired(unsigned int amount) {
	this->_hit += amount;
	if (this->_hit > this->_max_hit)
		this->_hit = this->_max_hit;
	std::cout << "FR4G-TP " << this->_name << " is healed. Current HP is " << this->_hit<<"."<< std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attacks[5] = {"Bite", "Shred", "Wreck", "Shockwave", "Agony"};
	int i;

	if (this->_energy < 25)
	{
		std::cout << "FR4G-TP " << this->_name << " does not have enough energy to attack. Current energy is "<< this->_energy <<std::endl;
		return;
	}
	this->_energy -= 25;
	srand(time(NULL));
	i = rand() % 5;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<" by VaultHunter: " << attacks[i] << std::endl;
}

