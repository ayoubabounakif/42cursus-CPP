/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:29:59 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/24 18:00:32 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main( void )
{

    std::cout << std::endl << "------------- CLAPTRAP ----------------" << std::endl;

    ClapTrap CT("Q-BEAST#4");
    CT.attack("<POOLERS>");
    CT.takeDamage(50);
    CT.beRepaired((unsigned int)-100);

    std::cout << std::endl << "---------- BASIC SCAVTRAP ----------" << std::endl;

    ScavTrap ST("MASHAD");

    std::cout << "****** Calling getters from the inherited class" << std::endl;
    std::cout << "** hitPoints: " << ST.getHitPoints() << std::endl;
    std::cout << "** energyPoints: " << ST.getEnergyPoints() << std::endl;
    std::cout << "** attackDamage: " << ST.getAttackDamage() << std::endl;
    
    ST.attack("<APRIL-POOLERS>");
    ST.takeDamage(80);
    ST.beRepaired(25);

    std::cout << std::endl << "------- SCAVTRAP's COPY CONSTRUCTOR ----------" << std::endl;
    
    ScavTrap STT(ST);
    STT.attack("<JUNE-POOLERS>");
    

    std::cout << std::endl <<  "------ SCAVTRAP'S ASSIGNMENT OPERATOR -------" << std::endl;
    STT = ST;
    STT.attack("<PEOPLE>");
    STT.guardGate();

    std::cout << std::endl << "----------------- FRAGTRAP ----------------" << std::endl;

    FragTrap FT("HOLYSHIT");
    FT.attack("<JULY-POOLERS>");
    FT.takeDamage(200);
    FT.beRepaired(5);

    std::cout <<  "--------------------------------------------" << std::endl << std::endl;

    return (EXIT_SUCCESS);
}