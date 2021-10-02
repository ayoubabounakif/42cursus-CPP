/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:39:38 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:39:39 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main(void)
{
    {
        Weapon club = Weapon("Crude Spiked Club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Deadly Vicious Axe");
        bob.attack();
    }
    std::cout << "---------------------------------" << std::endl;
    {
        Weapon club = Weapon("Crude Spiked Club");
        Weapon sword = Weapon("Shadowmourne");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Lich King's Sword");
        jim.attack();
        jim.setWeapon(sword);
        jim.attack();
    }
}
