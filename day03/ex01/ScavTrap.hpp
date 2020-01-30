/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:34:14 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 09:38:44 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "FragTrap.hpp"

class ScavTrap : public FragTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &var);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer();

	private:
	   	
	   	int					_hit;
		int					_max_hit;
		int					_energy;
		int					_max_energy;
		int					_lvl;
		std::string			_name;
		int					_matt;
		int					_ratt;
		int					_ardam;

};

#endif
