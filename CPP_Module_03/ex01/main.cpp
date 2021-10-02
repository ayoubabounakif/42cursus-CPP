/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:29:59 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/24 18:00:33 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main( void )
{
/*     ClapTrap T("Q-BEAST#4");
    T.attack("Poolers");
    T.takeDamage(50);
    T.beRepaired((unsigned int)-100); */

    std::cout << "---------------------------------" << std::endl;

    ScavTrap TT("MASHAD");

    std::cout << "---------------------------------" << std::endl;

    std::cout << "Calling getters from the inherited class" << std::endl;
    std::cout << "hitPoints: " << TT.getHitPoints() << std::endl;
    std::cout << "energyPoints: " << TT.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << TT.getAttackDamage() << std::endl;
    
    std::cout << "---------------------------------" << std::endl;

    TT.attack("Poolers");
    TT.takeDamage(80);
    TT.beRepaired(25);

    std::cout << "---------------------------------" << std::endl;
    
    ScavTrap TTT(TT);
    TTT.attack("Motherfuckers");
    
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Assignment Operator" << std::endl;
    TT = TTT;
    TT.attack("Oh my god it's working");

    std::cout << "---------------------------------" << std::endl;

    

    return (EXIT_SUCCESS);
}