/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:09:49 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 16:07:04 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"
#include <string>

class Human {

	public:
		Human();
		~Human();

		Brain ref;
		std::string identify();
		Brain &getBrain();

};

#endif
