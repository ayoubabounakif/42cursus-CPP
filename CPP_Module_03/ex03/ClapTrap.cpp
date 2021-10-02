/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:10:56 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/25 13:09:33 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
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

void		ClapTrap::attack(std::string const & target)
{
	std::cout << "Claptrap" << 
		" <" << this->_name << "> " <<
		"attack " << target << ", causing " <<
		this->_attackDamage << " hours of TIG damage!" <<
	std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap" <<
		" <" << this->_name << "> " <<
		"inflicts " << amount << " BD.DPS!" <<
	std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap" <<
		" <" << this->_name << "> " <<
		"recovered " << amount << " HPs!" <<
	std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		ClapTrap::getName( void ) const
{
	return (this->_name);
}

int				ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int				ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int				ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

void			ClapTrap::setName( std::string name )
{
	this->_name = name;
}

/* ************************************************************************** */