/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:09:28 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:49:32 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: Form(target, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	myfile;
	Form::execute( executor );
	myfile.open(this->_target + "_shrubbery");

	myfile << "                     .                          " << std::endl;
	myfile << "                     M                          " << std::endl;
	myfile << "                    dM                          " << std::endl;
	myfile << "                    MMr                         " << std::endl;
	myfile << "                   4MMML                  .     " << std::endl;
	myfile << "                   MMMMM.                xf     " << std::endl;
	myfile << "   .              'MMMMM               .MM-     " << std::endl;
	myfile << "    Mh..          +MMMMMM            .MMMM      " << std::endl;
	myfile << "    .MMM.         .MMMMML.          MMMMMh      " << std::endl;
	myfile << "     )MMMh.        MMMMMM         MMMMMMM       " << std::endl;
	myfile << "      3MMMMx.     'MMMMMMf      xnMMMMMM'       " << std::endl;
	myfile << "      '*MMMMM      MMMMMM.     nMMMMMMP'        " << std::endl;
	myfile << "        *MMMMMx    'MMMMM\\   .MMMMMMM=         " << std::endl;
	myfile << "         *MMMMMh   'MMMMM'   JMMMMMMP           " << std::endl;
	myfile << "           MMMMMM   3MMMM.  dMMMMMM            ." << std::endl;
	myfile << "            MMMMMM  'MMMM  .MMMMM(        .nnMP'" << std::endl;
	myfile << "=..          *MMMMx  MMM'  dMMMM'    .nnMMMMM*  " << std::endl;
	myfile << "  'MMn...     'MMMMr 'MM   MMM'   .nMMMMMMM*'   " << std::endl;
	myfile << "   '4MMMMnn..   *MMM  MM  MMP'  .dMMMMMMM""     " << std::endl;
	myfile << "     ^MMMMMMMMx.  *ML 'M .M*  .MMMMMM**'        " << std::endl;
	myfile << "        *PMMMMMMhn. *x > M  .MMMM**""           " << std::endl;
	myfile << "           \"'**MMMMhx/.h/ .=*'                 " << std::endl;
	myfile << "                    .3P\"%....                  " << std::endl;
	myfile << "                  nP"     "*MMnx                " << std::endl;

	myfile.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

/* ************************************************************************** */