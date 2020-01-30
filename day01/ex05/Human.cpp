/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:12:32 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 16:07:10 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
}

Human::~Human() {
}

std::string Human::identify()
{
	return (getBrain().identify());
}

Brain &Human::getBrain(void)
{
	return (this->ref);
}
