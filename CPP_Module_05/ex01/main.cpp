/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:24:49 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:54:50 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

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

	std::cout << "---------- TESTING EX01 -----------" << std::endl;

	try {
		Bureaucrat	TEST("BURE_TEST", 2);
		Form		TEST_FORM("TEST_FORM", 10, 15);

		TEST_FORM.beSigned(TEST);
		TEST.signForm(TEST_FORM);
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	
	return (EXIT_SUCCESS);
}
