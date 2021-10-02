/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:08:20 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 14:16:52 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &	Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Animal::makeSound( void ) const
{
	std::cout << "Animal : ->> AnimalSound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Animal::getType( void ) const
{
	return (this->_type);
}

/* ************************************************************************** */