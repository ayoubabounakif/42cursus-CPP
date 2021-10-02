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

Fixed::Fixed( void )
{
	std::cout
		<< "Default constructor called" <<
	std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const int number )
{
	std::cout
		<< "Int constructor called" <<
	std::endl;
	this->_fixedPointValue = (number * (1 << this->_nbFractionalBits));
}

Fixed::Fixed( const float number )
{
	std::cout
		<< "Float constructor called" <<
	std::endl;
	this->_fixedPointValue = roundf(number * (1 << this->_nbFractionalBits));
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

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << "" << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPointValue / (float)(1 << this->_nbFractionalBits));
}

int		Fixed::toInt( void ) const
{
	return ((int)this->_fixedPointValue / (int)(1 << this->_nbFractionalBits));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits( void ) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

/* ************************************************************************** */
