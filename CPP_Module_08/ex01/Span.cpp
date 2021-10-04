/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:58:14 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 18:49:17 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( unsigned int N )
{
	this->_N = new unsigned int[N];
	this->_maxSize = N;
	std::cout << "Span Constructor called" << std::endl;
}

Span::Span( const Span & src )
{
	*this = src;
	std::cout << "Span Copy Constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	delete [] this->_N;
	std::cout << "Span Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N = rhs._N;
		this->_maxSize = rhs._maxSize;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/* unsigned int	Span::longestSpan( void )
{
	unsigned int				span = 0;
	std::vector <unsigned int >	vec;
	for (unsigned int i = 0; i < this->_maxSize; i++)
		vec.push_back(this->_N[i]);
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	std::vector <unsigned int > ::iterator it = vec.begin();
	for (unsigned int i = 0; i < this->_maxSize; i++) {
		if (this->_N[i] != *it)
		{
			if (*it - this->_N[i] > span)
				span = *it - this->_N[i];
		}
		else
			continue ;
	}
	return span;
} */

void			Span::addNumber( unsigned int number ) const
{
	static unsigned int	 i = 0;

	if (i < this->_maxSize) {
		this->_N[i] = number;
		i++;
	}
	else
		throw Span::StorageFull();
}

unsigned int	Span::shortestSpan( void )
{
	if (this->_maxSize == 0 || this->_maxSize == 1)
		throw Span::NoSpan();
	std::vector <unsigned int >	vec;
	for (unsigned int i = 0; i < this->_maxSize; i++)
		vec.push_back(this->_N[i]);
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	return (vec[vec.size() - 2] - vec[vec.size() - 1]);
}

unsigned int	Span::longestSpan( void )
{
	std::vector <unsigned int >	vec;
	for (unsigned int i = 0; i < this->_maxSize; i++)
		vec.push_back(this->_N[i]);
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	return (vec[0] - vec[vec.size() - 1]);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
unsigned int	Span::getN( unsigned int i ) const
{
	if (i >= this->_maxSize)
		throw Span::OutOfBounds();
	return (this->_N[i]);
}

/* ************************************************************************** */