/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:23:50 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:44:36 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
	: _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		// this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << "<" << i.getName() << ">, bureaucrat grade <" << i.getGrade() << ">." << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		Bureaucrat::incrementGrade( void )
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		std::cout << "Incrementing Grade" << std::endl;
		this->_grade--;
	}
}

void		Bureaucrat::decrementGrade( void )
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		std::cout << "Decrementing Grade" << std::endl;
		this->_grade++;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

/* ************************************************************************** */