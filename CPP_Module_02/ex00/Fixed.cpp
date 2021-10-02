/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:28:10 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/22 16:28:11 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout
		<< "Default constructor called" <<
	std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout
		<< "Copy constructor called" <<
	std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout
		<< "Destructor called" <<
	std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout
		<< "Assignation operator called" <<
	std::endl;
	if ( this != &rhs )
	{
		this->_fixedPointValue = rhs.getRawBits();
/* 		this->_nbFractionalBits = FIXED_POINT_FRACTIONAL_BITS; */
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits( void ) const
{
	std::cout
		<< "getRawBits member function called" <<
	std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout
		<< "setRawBits member function called" <<
	std::endl;
	this->_fixedPointValue = raw;
}

/* ************************************************************************** */
