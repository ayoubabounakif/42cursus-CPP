/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:23:28 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 16:35:54 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal("Dog")
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	// this->_brain = new Brain();
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &	Dog::operator=( Dog const & rhs )
{
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	if ( this != &rhs )
	{
		(this->_brain) = (rhs._brain);
	}
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const
{
	std::cout << "Dog : ->> Heowdy Haw" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain *	Dog::getBrain( void ) const
{
	return (this->_brain);
}

/* ************************************************************************** */