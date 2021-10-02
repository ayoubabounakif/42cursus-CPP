/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:24:49 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 12:59:55 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main( void )
{
/* 	try
	{	
		Bureaucrat T("SAAD", 1505);
		std::cout << "---------------------------" << std::endl;
		std::cout << T;
		T.incrementGrade();
		std::cout << "Grade++ : -> " << T.getGrade() << std::endl;
		std::cout << "---------------------------" << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	} */

/* 	std::cout << "---------- TESTING EX01 -----------" << std::endl;

	try {
		Bureaucrat	TEST("BURE_TEST", 2);
		Form		TEST_FORM("TEST_FORM", 10, 15);

		TEST_FORM.beSigned(TEST);
		TEST.signForm(TEST_FORM);
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	} */

/* 	std::cout << "---------- TESTING EX02 -----------" << std::endl;
	std::cout << "****** ShrubberyCreationForm ******" << std::endl;
	try {
		Bureaucrat TEST("TEST#1", 135);
		ShrubberyCreationForm FORM("HOME");
		std::cout << FORM;
		std::cout << TEST;
		FORM.beSigned(TEST);
		// FORM.execute(TEST);
		TEST.executeForm(FORM);
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "******* RobotomyRequestForm *******" << std::endl;
	try {
		Bureaucrat TEST("TEST#1", 20);
		RobotomyRequestForm FORM("HOME");
		std::cout << FORM;
		std::cout << TEST;
		FORM.beSigned(TEST);
		// FORM.execute(TEST);
		TEST.executeForm(FORM);
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "***** PresidentialPardonForm ******" << std::endl;
	try {
		Bureaucrat TEST("TEST#1", 2);
		PresidentialPardonForm FORM("HOME");
		std::cout << FORM;
		std::cout << TEST;
		FORM.beSigned(TEST);
		// FORM.execute(TEST);
		TEST.executeForm(FORM);
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	} */

	std::cout << "---------- TESTING EX03 -----------" << std::endl;
	try {
		Bureaucrat	TEST("TEST#1", 130);
		Intern		INTERN;
		Form * 		FORM = INTERN.makeForm( "ShrubberyCreationForm" , TEST.getName() );
		FORM->beSigned( TEST );
		TEST.executeForm( *FORM );
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	
	return (EXIT_SUCCESS);
}
