/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:06:25 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 13:52:17 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {

	public:
		ZombieHorde(int n);
		~ZombieHorde();

		Zombie *zombies;
		int num;
		void announce();
};

#endif
