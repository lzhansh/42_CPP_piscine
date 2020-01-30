/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:02:26 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/15 10:22:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpv(0) {

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &obj) {

	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed::~Fixed() {
	
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {

	std::cout << "GetRawBits member function called" << std::endl;
	return (this->fpv);
}

void Fixed::setRawBits(int const raw) {

	std::cout << "SetRawBits member function called" << std::endl;
	this->fpv = raw;
}

Fixed &Fixed::operator=(const Fixed &var) {

	std::cout << "Assignment operator called" << std::endl;
	this->fpv = var.getRawBits();
	return (*this);
}

int const Fixed::frac_bits = 8;
