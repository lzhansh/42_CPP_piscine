/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:27:00 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 10:46:34 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak() {
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}
