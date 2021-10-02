/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:38:42 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:38:42 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA( std:: string name, Weapon & type)
: _name(name), _type(type) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
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

void		HumanA::attack( void )
{
	std::cout
		<< getName() << " attacks with his " << this->_type.getType() <<
	std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	HumanA::getName( void ) const
{
	return (this->_name);
}

void		HumanA::setName( std::string name )
{
	this->_name = name;
}

/* ************************************************************************** */
