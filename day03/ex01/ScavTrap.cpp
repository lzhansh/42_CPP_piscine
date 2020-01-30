/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:38:14 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 09:31:51 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap() : _hit(100), _max_hit(100), _energy(50), _max_energy(50), _lvl(1), _name("Default"), _matt(20), _ratt(15), _ardam(3) {
	std::cout << "ScavTrap " << this->_name << " is constructed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string n) : _hit(100), _max_hit(100), _energy(50), _max_energy(50), _lvl(1), _name(n), _matt(20), _ratt(15), _ardam(3) {
	std::cout << "ScavTrap " << this->_name << " is constructed" << std::endl;
	return ;
}


ScavTrap::~ScavTrap() {
	std::cout << "Destroyed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &var) {
	*this = var;
	std::cout << "Copy constructer called for "<< this->_name << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &var) {
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

void	ScavTrap::rangedAttack(std::string const &target) {

	std::cout <<  this->_name << " attacks " << target << " at range, causing " << this->_ratt << " points of damage !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) {

	std::cout <<  this->_name << " attacks " << target << " at melee, causing " << this->_matt << " points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
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
	std::cout <<  this->_name << " is damaged to " << amount << " points. Current armor: " << this->_ardam << "; and HP: " << this->_hit <<"." <<std::endl;
	if (this->_hit == 0)
		std::cout << this->_name << " is dead. T_T\n" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	this->_hit += amount;
	if (this->_hit > this->_max_hit)
		this->_hit = this->_max_hit;
	std::cout <<  this->_name << " is healed. Current HP is " << this->_hit<<"."<< std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	std::string challenges[5] = {"Run naked!", "Catch the tiger", "Push up 100 times!", "Sniff dry pepper powder", "Dance on your hands"};

	srand(time(NULL));
	std::cout << "Challenge for the newcomer is " << challenges[rand() % 5] << ". You have a choice: To do OR To do." <<  std::endl;
}
