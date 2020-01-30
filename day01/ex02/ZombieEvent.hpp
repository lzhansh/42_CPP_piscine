/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:55:24 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 13:05:28 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent {

	public:

		ZombieEvent(std::string t, std::string n);
		~ZombieEvent();

		std::string type;

		void setZombieType(std::string t);
		Zombie *newZombie(std::string name);
		Zombie *randomChump();
};

#endif
