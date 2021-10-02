/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyPhoneBookClass.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:57:12 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/16 18:57:12 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "crappyPhoneBook.hpp"

/*
**			Subroutines
*/

/*
**	Constructor
*/
crappyPhoneBook::crappyPhoneBook(void)
{
	this->_index = 0;
	this->_top = 0;
	std::cout << "crappyPhoneBook class has been constructed." << std::endl;
	return ;
}

/*
**	Destructor
*/
crappyPhoneBook::~crappyPhoneBook(void)
{
	std::cout << "crappyPhoneBook class has been destroyed." << std::endl;
	return ;
}

/*
**				Methods
*/
void	crappyPhoneBook::push(Contact instance)
{
	if (this->_top >= 8)
		this->_top = 0;
	this->_contact[this->_top++] = instance;
	if (this->_index <= 7)
		this->_index++;
	return ;
}

void	crappyPhoneBook::add(void)
{
	std::string		buffer[5];

	std::cout << "Enter the 'FIRST NAME' of the contact you want to ADD: ";
	getline(std::cin, buffer[0]);
	std::cout << "Enter the 'LAST NAME' of the contact you want to ADD: ";
	getline(std::cin, buffer[1]);
	std::cout << "Enter the 'NICKNAME' of the contact you want to ADD: ";
	getline(std::cin, buffer[2]);
	std::cout << "Enter the 'PHONE NUMBER' of the contact you want to ADD: ";
	getline(std::cin, buffer[3]);
	std::cout << "Enter the 'DARKEST SECRET' of the contact you want to ADD: ";
	getline(std::cin, buffer[4]);

	Contact	instance(buffer);
	push(instance);
	return ;
}

bool	inRange(int low, int high, int x)
{
    return ((x - high) * (x - low) <= 0);
}

void	crappyPhoneBook::search(void) const
{
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	if (this->_index == 0)
	{
		std::cout << "The phonebook is completely empty." << std::endl;
		return ;
	}
	for (int i = 0; i < this->_index; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (this->_contact[i].getFirstName().length() >= 10)
			std::cout << std::setw(9) << this->_contact[i].getFirstName().substr(0, 9) << "." << "|";
		else 
			std::cout << std::setw(10) << this->_contact[i].getFirstName() << "|";
		if (this->_contact[i].getLastName().length() >= 10)
			std::cout << std::setw(9) << this->_contact[i].getLastName().substr(0, 9) << "." << "|";
		else 
			std::cout << std::setw(10) << this->_contact[i].getLastName() << "|";
		if (this->_contact[i].getNickName().length() >= 10)
			std::cout << std::setw(9) << this->_contact[i].getNickName().substr(0, 9) << "." << "|";
		else 
			std::cout << std::setw(10) << this->_contact[i].getNickName() << "|";
		std::cout << std::endl;	
	}
	if (this->_index > 0)
	{
		int id;
		try
		{
			std::cout << "*----------*----------*----------*----------*" << std::endl;
			std::cout << "Enter which contact's index you want information on: ";
			std::string	whichContactIndex;
			getline(std::cin,whichContactIndex);
			id = std::stoi(whichContactIndex) - 1;
		}
		catch (...) {
			std::cout << "You must answer with a whole number >= 1 && <= 8" << std::endl;
			return ;
		}
		if (inRange(0, 7, id) == false)
		{
			std::cout << "The numbered you entered wasn't >= 1 && <= 8" << std::endl;
			return ;
		}
		if (this->_index <= id)
		{
			std::cout << "The index you entered doesn't match any existing contacts." << std::endl;;
			return ;
		}
		else
		{
			std::cout << "First name: " << this->_contact[id].getFirstName() << std::endl;
			std::cout << "Last name: " << this->_contact[id].getLastName() << std::endl;
			std::cout << "Nickname: " << this->_contact[id].getNickName() << std::endl;
			std::cout << "Phone Number: " << this->_contact[id].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->_contact[id].getDarkestSecret() << std::endl;
		}
	}
	return ;
}
