/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:01:28 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 15:51:10 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>
#include <sstream>

class Brain {
	
	public:

		Brain();
		~Brain();

		std::stringstream addr;
		std::string identify(); 
};

#endif
