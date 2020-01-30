/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:26:34 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 17:04:33 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

	public:
		HumanA(std::string n, Weapon &aa);
		~HumanA();

		std::string name;
		Weapon &a;
		void attack();
};

#endif
