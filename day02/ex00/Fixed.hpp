/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:02:43 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/15 10:22:39 by lzhansha         ###   ########.fr       */
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
		Fixed(const Fixed &obj);
		~Fixed();

		Fixed &operator=(const Fixed &var);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
