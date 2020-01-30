/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 09:00:55 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 09:38:40 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>

class	FragTrap {

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &var);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std:: string const &target);
	
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
