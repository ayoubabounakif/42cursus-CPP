/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:01:24 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 10:55:56 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main( int, char ** )
{
	std::list<int> lst;
	lst.push_back(42);
	lst.push_back(69);
	lst.push_back(420);
	lst.push_back(1337);
	std::list<int>::iterator it = lst.begin();
	for (; it != lst.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "---------------" << std::endl;
	easyfind(lst, 20);
	return (EXIT_SUCCESS);
}
