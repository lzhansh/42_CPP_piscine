/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:59:30 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 13:05:19 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(std::string t, std::string n) {

	this->type = t;
	newZombie(n);
	return;
}

ZombieEvent::~ZombieEvent() {

	std::cout << "ZombieEvent is destroyed" <<std::endl;
	return;
}

void ZombieEvent::setZombieType(std::string t) {

	this->type = t;
	std::cout << "Zombie type is set to " << t <<std::endl;
}

Zombie*  ZombieEvent::newZombie(std::string name) {

	Zombie *n = new Zombie(this->type, name);
	return (n);
}

Zombie*  ZombieEvent::randomChump() {

	srand(time(NULL));

	std::string names[10] = {"Blue", "Red", "White", "Noname", "Back",
							"Cyan", "Pink", "Green", "Orange", "Purple"};
	Zombie *n = newZombie(names[rand() % 10]);
	return (n);
}
