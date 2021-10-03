/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:01:24 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/03 17:50:44 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main( int, char ** )
{
	// int	values[5] = {1, 2, 3, 4, 5};
	// 	easyfind(values, 3);

	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(6);
	lst.push_back(8);
	std::list<int>::iterator it = lst.begin();
	for (; it != lst.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "---------------" << std::endl;
	easyfind(lst, 6);
	return (EXIT_SUCCESS);
}
