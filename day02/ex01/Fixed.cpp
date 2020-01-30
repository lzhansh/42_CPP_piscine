/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:02:26 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/15 12:35:50 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>
#include <fstream>

Fixed::Fixed() : fpv(0) {

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int n) {

	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << this->frac_bits);
	return;
}

Fixed::Fixed(const float f) {

	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * ( 1 << this->frac_bits)));
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

	return (this->fpv);
}

void Fixed::setRawBits(int const raw) {

	this->fpv = raw;
}

int	Fixed::toInt() const {

	return (getRawBits() >> (this->frac_bits));
}

float Fixed::toFloat() const {

	return ((float)getRawBits() / (1 << this->frac_bits));
}

Fixed &Fixed::operator=(const Fixed &var) {

	std::cout << "Assignment operator called" << std::endl;
	this->fpv = var.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

int const Fixed::frac_bits = 8;
