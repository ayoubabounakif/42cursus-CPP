/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:41:45 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 10:41:46 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	int	N;
	std::cout << "Enter how many Zombies you want to create: ";
	std::cin >> N;
	Zombie * TTT = zombieHorde(N, "Zombie #");

	for (int i = 0; i < N; i++)
		TTT[i].announce();
	delete[] TTT;

	return (EXIT_SUCCESS);
}
