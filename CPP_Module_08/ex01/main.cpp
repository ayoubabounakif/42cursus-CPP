/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:58:24 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/05 12:00:23 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

/* struct	RandomGenerator {
    int maxValue;
    RandomGenerator(int max) : maxValue(max) {}
    int operator()() { return rand() % maxValue; }
};
 */

int	main( int, char ** )
{
	try {
		Span sp = Span(10000);
		std::vector < unsigned int > vec(10000);
		srand((unsigned)time(NULL));
		for (std::vector< unsigned int >::iterator it = vec.begin(); it != vec.end(); ++it) {
			sp.addNumber(*it + (rand() % INT_MAX / 4));
		}
/* 		sp.addNumber( 10 ); */
		std::cout << "------------------------" << std::endl;
		std::cout << "shortestSpan -> " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan  -> " <<  sp.longestSpan() << std::endl;
		std::cout << "------------------------" << std::endl;
	} catch (const std::exception& e) { std::cerr << e.what() << std::endl; }

	return (EXIT_SUCCESS);
}
