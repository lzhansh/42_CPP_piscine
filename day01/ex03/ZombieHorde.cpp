/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:10:05 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 14:28:15 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) {

	this->zombies = new Zombie[n];
	this->num = n;
	std::string names[10] = {"One", "Two", "3", "FF", "five", "6", "Sev", "8", "NN", "Ten"};

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		this->zombies[i].name = names[rand() % 10];
		this->zombies[i].type = "Half Alive";
	}
	return;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->zombies;
	std::cout << "There are no zombies anymore T_T" <<std::endl;
	return;
}

void	ZombieHorde::announce() {
	for (int i = 0; i < this->num; i++)
		this->zombies[i].announce();
}
