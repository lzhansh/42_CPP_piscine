/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:02:43 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/15 12:33:03 by lzhansha         ###   ########.fr       */
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

		Fixed &operator=(const Fixed &var);

		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif
