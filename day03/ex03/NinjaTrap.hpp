/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 09:00:55 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:34:51 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {

	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap &obj);
		~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const &var);

		void	ninjaShoeBox(NinjaTrap &obj);
		void	ninjaShoebox(ClapTrap &obj);
		void	ninjaShoeBox(FragTrap &obj);
		void	ninjaShoeBox(ScavTrap &obj);
};

#endif
