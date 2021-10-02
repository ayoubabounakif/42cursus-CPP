/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:36:48 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:49:31 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
	: _name(nullptr), _isSigned(false), _signGrade(0), _reqGrade(0) {}

Form::Form( std::string name, int signGrade, int reqGrade )
	: _name(name), _signGrade(signGrade), _reqGrade(reqGrade)
{
	if (signGrade < 1 || reqGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150 || reqGrade > 150)
		throw (Form::GradeTooLowException());
	this->_isSigned = false;
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form( const Form & src )
	: _name(src.getName()), _signGrade(src.getSignGrade()), _reqGrade(src.getReqGrade())
{
	std::cout << "Form Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &			Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Form const & i )
{
	o << "------------ FORM STATE ------------" << std::endl;
	o << "Name      : -> " << i.getName() << std::endl;
	o << "isSigned  : -> " << i.getSign() << std::endl;
	o << "SignGrade : -> " << i.getSignGrade() << std::endl;
	o << "ReqGrade  : -> " << i.getReqGrade() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		Form::execute( Bureaucrat const & executor ) const
{
	if (!this->_isSigned)
		throw (Form::GradeCannotBeSigned());
	if (executor.getGrade() > this->_reqGrade)
		throw (Form::GradeTooLowException());
	if (executor.getGrade() < 0)
		throw (Form::GradeTooHighException());
}

void		Form::beSigned( Bureaucrat const & src )
{
	if (src.getGrade() >= 1 && src.getGrade() <= 150)
		this->_isSigned = true;
	else
	{
		if (src.getGrade() < 1)
			throw (Form::GradeTooHighException());
		else if (src.getGrade() > 150)
			throw (Form::GradeTooLowException());
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName( void ) const
{
	return (this->_name);
}

bool		Form::getSign( void ) const
{
	return (this->_isSigned);
}

int			Form::getSignGrade( void ) const
{
	return (this->_signGrade);
}

int			Form::getReqGrade( void ) const
{
	return (this->_reqGrade);
}

/* ************************************************************************** */