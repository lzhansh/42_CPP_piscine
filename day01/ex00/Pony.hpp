/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:15:54 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 10:25:55 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony {
	
	public:

		Pony(std::string const &name);
		~Pony(void);

		std::string color;

		std::string  &getName() 
		{
			return (this->_name);
		}
		
	private:
		std::string _name;
};

#endif
