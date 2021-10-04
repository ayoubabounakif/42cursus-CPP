/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:23:28 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 14:59:20 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal("Cat")
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &	Cat::operator=( Cat const & rhs )
{
	this->_brain = new Brain();
	if ( this != &rhs )
	{
		*(this->_brain) = *(rhs._brain);
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const
{
	std::cout << "Cat : ->> Meowy Maw" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain *	Cat::getBrain( void ) const
{
	return (this->_brain);
}

/* ************************************************************************** */