/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:27:51 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/24 17:33:24 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			FragTrap::highFivesGuys( void )
{
	std::cout << "Can I have a positive high fives ?" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */