/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 12:28:48 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 13:05:10 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	std::cout << "Zombies party" << std::endl;
	ZombieEvent *Pat = new ZombieEvent("Died", "Pat");

	Zombie One = Zombie("Half-died", "One");
	Zombie *Two = new Zombie("Alive", "Two");

	Pat->setZombieType("Homo");
	Pat->newZombie( "Hasel");
	Pat->randomChump();

	delete Pat;
	delete Two;
	return (0);
}
