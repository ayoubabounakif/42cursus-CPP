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
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const int number )
{
	this->_fixedPointValue = (number * (1 << this->_nbFractionalBits));
}

Fixed::Fixed( const float number )
{
	this->_fixedPointValue = roundf(number * (1 << this->_nbFractionalBits));
}

Fixed::Fixed( const Fixed & src )
{
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
	if ( this != &rhs )
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << "" << i.toFloat();
	return o;
}

/* ----- Comparison Operators ----- */

bool 		Fixed::operator==(const Fixed &rhs ) const
{
	if ( this != &rhs )
	{
		if (this->_fixedPointValue == rhs._fixedPointValue)
			return (true);
		else
			return (false);
	}
	return (true);
}

bool 		Fixed::operator!=(const Fixed &rhs ) const
{
	if ( this != &rhs )
	{
		if (this->_fixedPointValue != rhs._fixedPointValue)
			return (true);
		else
			return (false);
	}
	return (false);
}

bool 		Fixed::operator<(const Fixed &rhs ) const
{
	if ( this != &rhs )
	{
		if (this->_fixedPointValue < rhs._fixedPointValue)
			return (true);
		else
			return (false);
	}
	return (false);
}

bool 		Fixed::operator<=(const Fixed &rhs ) const
{
	if ( this != &rhs )
	{
		if (this->_fixedPointValue <= rhs._fixedPointValue)
			return (true);
		else
			return (false);
	}
	return (true);
}

bool 		Fixed::operator>(const Fixed &rhs ) const
{
	if ( this != &rhs )
	{
		if (this->_fixedPointValue > rhs._fixedPointValue)
			return (true);
		else
			return (false);
	}
	return (false);
}

bool 		Fixed::operator>=(const Fixed &rhs ) const
{
	if ( this != &rhs )
	{
		if (this->_fixedPointValue >= rhs._fixedPointValue)
			return (true);
		else
			return (false);
	}
	return (true);
}

/* ----- Arithmetic  Operators ----- */

Fixed 		Fixed::operator+(const Fixed &rhs ) const
{
	Fixed	T;

	T._fixedPointValue = this->_fixedPointValue + rhs._fixedPointValue;
	return (T);
}

Fixed 		Fixed::operator-(const Fixed &rhs ) const
{
	Fixed	T;

	T._fixedPointValue = this->_fixedPointValue - rhs._fixedPointValue;
	return (T);
}

Fixed 		Fixed::operator*(const Fixed &rhs ) const
{
	Fixed	T;

	T._fixedPointValue = this->_fixedPointValue * rhs._fixedPointValue;
	return (T);
}

Fixed 		Fixed::operator/(const Fixed &rhs ) const
{
	Fixed	tmpObject;

	tmpObject._fixedPointValue = this->_fixedPointValue / rhs._fixedPointValue;
	return (tmpObject);
}

/* ----- Increment/Decrement Operators ---- */

Fixed &		Fixed::operator++()
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed &		Fixed::operator--()
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed tmpObject;

	tmpObject = *this;
	this->_fixedPointValue++;
	return (tmpObject);
}

Fixed		Fixed::operator--(int)
{
	Fixed tmpObject;

	tmpObject = *this;
	this->_fixedPointValue--;
	return (tmpObject);
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

Fixed &	Fixed::min( Fixed &lhs, Fixed &rhs )
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed &	Fixed::max( Fixed &lhs, Fixed &rhs )
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
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
