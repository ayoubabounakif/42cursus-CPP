/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyContactClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:10:05 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/17 13:10:06 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "crappyPhoneBook.hpp"

/*
**			Subroutines
*/

/*
**	Constructors
*/
Contact::Contact(std::string value [])
{
	this->_firstName = value[0];
	this->_lastName = value[1];
	this->_nickName = value[2];
	this->_phoneNumber = value[3];
	this->_darkestSecret = value[4];
	std::cout << "Contact class has been constructed." << std::endl;
	return ;
}

Contact::Contact(void)
{
	return ;
}

/*
**	Destructor
*/
Contact::~Contact(void)
{
	std::cout << "Contact class has been destroyed." << std::endl;
	return ;
}

/*
**			Accessors
*/

/*
**  Getters
*/

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

/*
**  Setters
*/
void    Contact::setFirstName(std::string value)
{
	this->_firstName = value;
	return ;
}

void    Contact::setLastName(std::string value)
{
	this->_lastName = value;
	return ;
}

void    Contact::setNickName(std::string value)
{
	this->_nickName = value;
	return ;
}

void    Contact::setPhoneNumber(std::string value)
{
	this->_phoneNumber = value;
	return ;
}

void    Contact::setDarkestSecret(std::string value)
{
	this->_darkestSecret = value;
	return ;
}
