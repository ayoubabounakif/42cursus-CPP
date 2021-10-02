/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:07:12 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 17:07:30 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int	main( int ac, char const **av )
{
	if (ac == 2)
	{
		Karen	Karen;

		Karen.complain(av[1]);
	}
	else
	{
		std::cout << "Invalid number of parameters" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
