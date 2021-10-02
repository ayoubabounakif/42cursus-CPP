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
	Zombie	T("Ayoub");
	T.announce();

	Zombie * TT = newZombie("uPussssyYo");
	TT->announce();
	delete TT;

	randomChump("Patti Page");
	return (EXIT_SUCCESS);
}
