/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <lzhansha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 09:00:55 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/17 13:44:56 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class	ClapTrap
{

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &obj);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &var);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string			name;

		void	setAttr(std::string n, int h, int mh, int en, int men, int lvl, int ma, int ra, int ad);
		void	setHit(int n);
		void	setMaxHit(int n);
		void	setEn(int n);
		void	setMaxEn(int n);
		void	setLvl(int n);
		void	setMatt(int n);
		void	setRatt(int n);
		void	setArDam(int n);

		int	getHit(void);
		int	getMaxHit(void);
		int	getEn(void);
		int	getMaxEn(void);
		int	getLvl(void);
		int	getMatt(void);
		int	getRatt(void);
		int	getArdam(void);

	private:

		int					_hit;
		int					_max_hit;
		int					_energy;
		int					_max_energy;
		int					_lvl;
		int					_matt;
		int					_ratt;
		int					_ardam;

}; 


#endif
