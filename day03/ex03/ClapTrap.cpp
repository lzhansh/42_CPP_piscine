/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:49:52 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:09:31 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() : name("CL4G-TP"), _hit(100), _max_hit(100), _energy(100), _max_energy(100), _lvl(1),  _matt(30), _ratt(20), _ardam(5) {
	std::cout << "CL4G-TP Default " << this->name << " is constructed" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string n) : name(n), _hit(100), _max_hit(100), _energy(100), _max_energy(100), _lvl(1), _matt(30), _ratt(20), _ardam(5) {
	std::cout << "CL4G-TP " << this->name << " is constructed" << std::endl;
	return ;
}


ClapTrap::~ClapTrap() {
	std::cout << "CL4G-TP " << this->name <<  " is destroyed" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap &var) {
	*this = var;
	std::cout << "CL4G-TP " << "copy constructer called for " << this->name << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &var) {
	this->_hit = var._hit;
	this->_max_hit = var._max_hit;
	this->_energy = var._energy;
	this->_max_energy = var._max_energy;
	this->_lvl = var._lvl;
	this->name = var.name;
	this->_matt = var._matt;
	this->_ratt = var._ratt;
	this->_ardam = var._ardam;
	std::cout << "CL4G-TP " << "assigning operator is called for " << this->name <<std::endl;
	return (*this);
}

void	ClapTrap::setAttr(std::string n, int h, int mh, int en, int men, int lvl, int ma, int ra, int ad) {
	this->_hit = h;
	this->_max_hit = mh;
	this->_energy = en;
	this->_max_energy = men;
	this->_lvl = lvl;
	this->name = n;
	this->_matt = ma;
	this->_ratt = ra;
	this->_ardam = ad;
}

void	ClapTrap::rangedAttack(std::string const &target) {

	std::cout << "CL4G-TP " << this->name << " attacks " << target << " at range, causing " << this->_ratt << " points of damage !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) {

	std::cout << "CL4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->_matt << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
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
	std::cout << "CL4G-TP " << this->name << " is damaged to " << amount << " points. Current armor: " << this->_ardam << "; and HP: " << this->_hit <<"." <<std::endl;
	if (this->_hit == 0)
		std::cout << "CL4G-TP " << this->name << " is dead. T_T\n" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_hit += amount;
	if (this->_hit > this->_max_hit)
		this->_hit = this->_max_hit;
	std::cout << "CL4G-TP " << this->name << " is healed. Current HP is " << this->_hit<<"."<< std::endl;
}

void	ClapTrap::setHit(int n) {
	this->_hit = n;
}

void	ClapTrap::setMaxHit(int n) {
	this->_max_hit = n;
}

void	ClapTrap::setEn(int n) {
	this->_energy = n;
}

void	ClapTrap::setMaxEn(int n) {
	this->_max_energy = n;
}

void	ClapTrap::setLvl(int n) {
	this->_lvl = n;
}

void	ClapTrap::setMatt(int n) {
	this->_matt = n;
}

void	ClapTrap::setRatt(int n) {
	this->_ratt = n;
}

void	ClapTrap::setArDam(int n) {
	this->_ardam = n;
}

int	ClapTrap::getHit(void) {
	return (this->_hit);
}

int	ClapTrap::getMaxHit(void) {
	return (this->_max_hit);
}

int	ClapTrap::getEn(void) {
	return (this->_energy);
}

int	ClapTrap::getMaxEn(void) {
	return (this->_max_energy);
}

int	ClapTrap::getLvl(void) {
	return (this->_lvl);
}

int	ClapTrap::getMatt(void) {
	return (this->_matt);
}

int	ClapTrap::getRatt(void) {
	return (this->_ratt);
}

int	ClapTrap::getArdam(void) {
	return (this->_ardam);
}

