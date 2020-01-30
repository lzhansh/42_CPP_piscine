/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:02:43 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/15 14:35:22 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	
	int fpv;
	static const int frac_bits;

	public:
		
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &obj);
		~Fixed();

		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed &operator=(const Fixed &var);
		Fixed operator+(const Fixed &var);
		Fixed operator-(const Fixed &var);
		Fixed operator*(const Fixed &var);
		Fixed operator/(const Fixed &var);

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int num);
		Fixed operator--(int num);
		
		bool operator==(const Fixed &var1);
		bool operator!=(const Fixed &var1);
		bool operator<=(const Fixed &var1);
		bool operator>=(const Fixed &var1);
		bool operator>(const Fixed &var1);
		bool operator<(const Fixed &var1);

		static Fixed &min(Fixed &v1, Fixed &v2) ;
		static Fixed const &min(const Fixed &v1, const Fixed &v2);

		static Fixed &max(Fixed &v1, Fixed &v2) ;
		static Fixed const &max(const Fixed &v1, const Fixed &v2);

};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif
