/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:22:36 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 14:22:37 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"

class HumanB
{

	public:
		HumanB( std::string name );

		std::string	getName( void ) const;
		void		setName( std::string name );

		void		attack( void );

		void		setWeapon( Weapon & type );

		~HumanB();

	private:
		std::string	_name;
		Weapon		* _type;

};

#endif /* ********************************************************** HUMANB_H */
