/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:58:24 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 14:46:05 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int	main( int, char ** )
{
/* 	try {
		Span sp = Span(3);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);

		for (unsigned int i = 0; i < 3 ; i++)
			std::cout << sp.getN( i ) << std::endl;
	}
	catch (const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { std::cout << sp.shortestSpan() << std::endl; }
	catch ( const std::exception& e ) { std::cerr << e.what() << std::endl; }
 */	
	Span sp = Span(3);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
/* 
	std::cout << "--- My numbers ---" << std::endl;
	for (unsigned int i = 0; i < 3 ; i++)
		std::cout << sp.getN( i ) << std::endl; */

	return (EXIT_SUCCESS);
}
