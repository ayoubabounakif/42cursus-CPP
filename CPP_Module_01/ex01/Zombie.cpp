/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:21:53 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:21:54 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
}

Zombie::Zombie( std::string name ) : _name(name) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout
		<< "<" << getName() << "> " << "Zombie destructor called" <<
	std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Zombie::announce( void ) const
{
	std::cout
		<< "<" << getName() << "> " << "BraiiiiiiinnnzzzZ..." <<
	std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Zombie::getName( void ) const
{
	return (this->_name);
}

void			Zombie::setName( std::string name )
{
	this->_name = name;
}

/* ************************************************************************** */
