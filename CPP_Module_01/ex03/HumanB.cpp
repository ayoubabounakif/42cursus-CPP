/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:22:32 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 14:22:33 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB( std::string name ) : _name(name) {}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
	std::cout
		<< getName() << " destructor called" <<
	std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void		HumanB::attack( void )
{
	std::cout
		<< getName() << " attacks with his " << this->_type->getType() << 
	std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



std::string	HumanB::getName( void ) const
{
	return (this->_name);
}

void		HumanB::setName( std::string name )
{
	this->_name = name;
}

void		HumanB::setWeapon( Weapon & type )
{
	this->_type = &type;
}

/* ************************************************************************** */
