/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:39:03 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/25 13:15:08 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
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

void			DiamondTrap::attack( std::string const & target )
{
	std::cout << "DiamondTrap" << 
		" <" << this->_name << "> " <<
		"attack " << target << ", causing " <<
		ScavTrap::_attackDamage << " [###THAT WERE INHERITED FROM SCAVTRAP###] " << "hours of TIG damage!" <<
	std::endl;
}

void			DiamondTrap::highFivesGuys( void )
{
	std::cout << "DiamondTrap -> Can I have a positive high fives ?" << std::endl;
}

void 			DiamondTrap::guardGate( void )
{
	std::cout << "DiamondTrap have enterred in Gate keeper mode" << std::endl;
}

void			DiamondTrap::whoAmI( void )
{
	std::cout << "DT Name :-> " << this->_name << " ||||| CT Name:-> " << ClapTrap::getName() << " " <<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		DiamondTrap::getName( void ) const
{
	return (this->_name);
}

int				DiamondTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int				DiamondTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int				DiamondTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

/* ************************************************************************** */