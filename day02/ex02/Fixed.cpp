/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:02:26 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/15 14:35:18 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <fstream>

Fixed::Fixed() : fpv(0) {

	return;
}

Fixed::Fixed(const int n) {

	setRawBits(n << this->frac_bits);
	return;
}

Fixed::Fixed(const float f) {

	setRawBits(roundf(f * ( 1 << this->frac_bits)));
	return;
}

Fixed::Fixed(const Fixed &obj) {

	*this = obj;
	return ;
}

Fixed::~Fixed() {
	
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

	this->fpv = var.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &var) {

	return (Fixed(this->fpv + var.getRawBits()));
}

Fixed Fixed::operator-(const Fixed &var) {

	return (Fixed(this->fpv - var.getRawBits()));
}

Fixed Fixed::operator*(const Fixed &var) {

	return (Fixed(this->toFloat() * var.toFloat()));
}

Fixed Fixed::operator/(const Fixed &var) {

	if (var.toFloat() == 0)
		return (Fixed(0));
	return (Fixed(this->toFloat() / var.toFloat()));
}

Fixed &Fixed::operator++() {
	this->fpv = this->fpv + 1;
	return (*this);
}

Fixed Fixed::operator++(int num) {
	Fixed old(*this);
	(void) num;
	this->fpv = ++this->fpv;
	return (old);
}

Fixed &Fixed::operator--() {
	this->fpv = this->fpv - 1;
	return (*this);
}

Fixed Fixed::operator--(int num) {
	Fixed old(*this);
	(void)num;
	this->fpv = --this->fpv;
	return (old);
}

bool Fixed::operator==(const Fixed &var) {
	return (this->toFloat() == var.toFloat());
}

bool Fixed::operator!=(const Fixed &var) {
	return (this->toFloat() != var.toFloat());
}

bool Fixed::operator<=(const Fixed &var) {
	return (this->toFloat() <= var.toFloat());
}

bool Fixed::operator>=(const Fixed &var) {
	return (this->toFloat() >= var.toFloat());
}

bool Fixed::operator<(const Fixed &var) {
	return (this->toFloat() < var.toFloat());
}

bool Fixed::operator>(const Fixed &var) {
	return (this->toFloat() > var.toFloat());
}

Fixed &Fixed::max(Fixed &v1, Fixed &v2) {
	return (v1.toFloat() > v2.toFloat() ? v1 : v2);
}

Fixed &Fixed::min(Fixed &v1, Fixed &v2) {
	return (v1.toFloat() < v2.toFloat() ? v1 : v2);
}

Fixed const &Fixed::min(const Fixed &v1, const Fixed &v2) {
	return ((v1.toFloat() < v2.toFloat()) ? v1 : v2);
}

Fixed const &Fixed::max(const Fixed &v1, const Fixed &v2) {
	return ((v1.toFloat() > v2.toFloat()) ? v1 : v2);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

int const Fixed::frac_bits = 8;
