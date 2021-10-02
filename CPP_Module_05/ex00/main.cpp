/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:24:49 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:54:56 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main( void )
{
	try
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
	}

	return (EXIT_SUCCESS);
}
