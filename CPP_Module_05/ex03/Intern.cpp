/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:57:38 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 12:40:06 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern( const Intern & src )
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &	Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *		Intern::makeForm( std::string formName, std::string formTarget )
{
	const std::string	names[3] = {
		"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"
	};
	Form	*form[3] = {
		new ShrubberyCreationForm(formTarget),
		new RobotomyRequestForm(formTarget),
		new PresidentialPardonForm(formTarget)
	};
	int	j = -1;
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == formName)
			j = i;
		else
			delete form[i];
	}
	if (j == -1)
		throw (Intern::FormNotFound());
	return (form[j]);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */