/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:26:34 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 17:15:09 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

	public:
		HumanB(std::string n);
		~HumanB();

		std::string name;
		Weapon *a;
		void attack();
		void setWeapon(Weapon &weap);
};

#endif
