/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:21:24 by lzhansha          #+#    #+#             */
/*   Updated: 2020/01/14 09:13:12 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhonebookClass.hpp"
#include "ContactsClass.hpp"

void	display_contact(Phonebook *inst, int v)
{
	std::cout << "First name:		" << inst->member[v].get_contact(0) << std::endl;
	std::cout << "Last name:		" << inst->member[v].get_contact(1) << std::endl;
	std::cout << "Nickname:			" << inst->member[v].get_contact(2) << std::endl;
	std::cout << "Login:			" << inst->member[v].get_contact(3) << std::endl;
	std::cout << "Postal:			" << inst->member[v].get_contact(4) << std::endl;
	std::cout << "Email:			" << inst->member[v].get_contact(5) << std::endl;
	std::cout << "Phone:			" << inst->member[v].get_contact(6) << std::endl;
	std::cout << "Birth date:		" << inst->member[v].get_contact(7) << std::endl;
	std::cout << "Fav meal:			" << inst->member[v].get_contact(8) << std::endl;
	std::cout << "Underwear color:	" << inst->member[v].get_contact(9) << std::endl;
	std::cout << "Darkest secret:	" << inst->member[v].get_contact(10) << std::endl;
}

std::string	ten_less(std::string s)
{
	std::string res = "          ";
	int len = s.size();

	if (len > 10)
	{
		res = s.substr(0, 9);
		res = res + ".";
	}
	else
		res.replace(10 - len, len, s);
	return (res);
}

void	search_contact(Phonebook *inst, int *num)
{
	std::string input;
	int i = -1;
	int value;

	if (*num == 0)
	{
		std::cout << "There are no contacts." << std::endl;
		return ;
	}
	std::cout << "   Index  |First name| Last name| Nickname \n";
	while (++i < *num)
	{
		std::cout << "    " << i + 1 << "     |";
		input = ten_less(inst->member[i].get_contact(0));
		std::cout << input << "|";
		input = ten_less(inst->member[i].get_contact(1));
		std::cout << input << "|";
		input = ten_less(inst->member[i].get_contact(2));
		std::cout << input << std::endl;
	}
	std::cout << "Please, choose index of the contact whose details you want to see\n";
	std::cin >> value;
	if (value >= *num || value < 1)
	{
		std::cout << "There is no index " << value << std::endl;
		return;
	}
	display_contact(inst, value - 1);
}

void	add_contact(Phonebook *inst, int *num)
{
	std::string input;
	int i = 0;
	
	if (*num >= 8)
	{
		std::cout << "Sorry, phonebook is full" <<std::endl;
		return ;
	}
	std::cout << "Please, fill out the following form to add a contact" << std::endl;
	std::cout << "> First name: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Last name: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Nickname: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Login name: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Postal: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Email: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Phone: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Birth date: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Fav meal: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Underwear color: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	std::cout << "> Darkest secret: \n";
	std::getline(std::cin, input);
	inst->member[*num].set_contact(input, i++);
	(*num)++;
}

int main(void)
{
	std::string command = " ";
	Phonebook inst[8];
	int num = 0;

	while (1)
	{
		std::cout << "Please, choose a command: ADD or EXIT or SEARCH" << std::endl;
		std::getline(std::cin, command);
		if(!command.compare("ADD"))
			add_contact(inst, &num);
		else if(!command.compare("EXIT"))
			return (0);	
		else if(!command.compare("SEARCH"))
			search_contact(inst, &num);
		else
			std::cout << "Illegal command.\n";
	}
	return (0);
}
