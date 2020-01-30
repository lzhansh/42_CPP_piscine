/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 10:25:03 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/16 15:32:46 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b("Berthun");
	FragTrap c(b);

	a = FragTrap("Egil");

	a.rangedAttack("Campion");
	b.rangedAttack("Junter");

	c.takeDamage(50);
	c.takeDamage(50);
	b.beRepaired(100);
	c.takeDamage(150);
	a.vaulthunter_dot_exe("Hue");
	return (0);
}
