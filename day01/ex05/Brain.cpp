/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:04:32 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 15:51:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain() {
	this->addr << this;
	return;
}

Brain::~Brain() {
}

std::string Brain::identify() {
	return (this->addr.str());
}
