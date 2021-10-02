/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:07:54 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 17:07:55 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen()
{
	std::cout
		<< "Karen constructor called" <<
	std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen()
{
	std::cout
		<< "Karen destructor called" <<
	std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void    Karen::complain( std::string level )
{
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    myPointerToFunction ptf[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

    for (int i = 0; i < 4; i++)
    {
        if (level.compare(levels[i]) == 0)
            (this->*ptf[i])();
    }
}

void    Karen::_debug( void )
{
    std::cout
        << "I love to get extra bacon "
        << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
        << "I just love it!" <<
    std::endl;
    return ;
}

void    Karen::_info( void )
{
    std::cout
        << "I cannot believe adding extra "
        << "bacon cost more money. You don’t put enough! "
        << "If you did I would not have to ask " 
        << "for it!" <<
    std::endl;
    return ;
}

void    Karen::_warning( void )
{
    std::cout
        << "I think I deserve to have some extra bacon for free. "
        << "I’ve been coming here for years "
        << "and you just started working here last month." <<
    std::endl;
    return ;
}

void    Karen::_error( void )
{
    std::cout
        << "This is unacceptable, I want to speak to the manager now." <<
    std::endl;
    return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
