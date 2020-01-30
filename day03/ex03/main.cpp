/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 10:25:03 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:43:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

#include <iostream>

int main()
{
	FragTrap a;
	FragTrap b("Berthun");
	FragTrap c(b);
	a = FragTrap("Egil");
	std::cout << std::endl;
	ScavTrap sa;
	ScavTrap sb("Aevar");
	ScavTrap sc(sb);
	sa = ScavTrap("Stronge");
	std::cout << std::endl;
	NinjaTrap nsa;
	NinjaTrap nsb("Raegon");
	NinjaTrap nsc(nsb);
	nsa = NinjaTrap("Khal");
	std::cout << std::endl;

	a.rangedAttack("Campion");
	b.rangedAttack("Junter");
	std::cout << std::endl;

	sa.rangedAttack("Foal");
	sb.rangedAttack("Lander");
	std::cout << std::endl;

	nsa.rangedAttack("Danny");
	nsb.rangedAttack("Finger");
	std::cout << std::endl;

	c.takeDamage(50);
	c.takeDamage(50);
	b.beRepaired(100);
	c.takeDamage(150);
	std::cout << std::endl;

	sc.takeDamage(50);
	sc.takeDamage(50);
	sb.beRepaired(100);
	sc.takeDamage(150);
	std::cout << std::endl;

	nsc.takeDamage(50);
	nsc.takeDamage(50);
	nsb.beRepaired(100);
	nsc.takeDamage(150);
	std::cout << std::endl;
	
	a.vaulthunter_dot_exe("Hue");
	sa.challengeNewcomer();
	nsa.ninjaShoeBox(sa);
	nsb.ninjaShoeBox(b);
	return (0);
}
