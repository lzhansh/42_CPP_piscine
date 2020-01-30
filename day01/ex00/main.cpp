/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:50:59 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 10:25:52 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

void ponyOnTheHeap(void)
{
	Pony *pony1 = new Pony("Pixy");
	
	pony1->color = "pink";

	std::cout << pony1->getName() << " is " << pony1->color << std::endl;

	delete pony1;
}

void ponyOnTheStack(void)
{
	Pony pony2 = Pony("Stacy");

	pony2.color = "gray";

	std::cout << pony2.getName() << " is " << pony2.color << std::endl;

	return;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
