/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:55:27 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 11:55:41 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *T = new Zombie[N];
    int i;

    i = -1;
    while (++i < N)
        T[i].setName(name + std::to_string(i));
    return (T);
}
