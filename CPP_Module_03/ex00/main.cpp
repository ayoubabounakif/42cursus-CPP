/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:29:59 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/24 11:40:48 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main( void )
{
    ClapTrap T("Q-BEAST#4");
    T.attack("Pooolers");
    T.takeDamage(50);
    T.beRepaired((unsigned int)-100);

    

    return (EXIT_SUCCESS);
}