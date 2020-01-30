/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 10:25:03 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 09:31:49 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b("Berthun");
	FragTrap c(b);
	a = FragTrap("Egil");

	ScavTrap sa;
	ScavTrap sb("Aevar");
	ScavTrap sc(sb);
	sa = ScavTrap("Stronge");


	a.rangedAttack("Campion");
	b.rangedAttack("Junter");
	sa.rangedAttack("Foal");
	sb.rangedAttack("Lander");


	c.takeDamage(50);
	c.takeDamage(50);
	b.beRepaired(100);
	c.takeDamage(150);

	sc.takeDamage(50);
	sc.takeDamage(50);
	sb.beRepaired(100);
	sc.takeDamage(150);


	a.vaulthunter_dot_exe("Hue");

	sa.challengeNewcomer();
	return (0);
}
