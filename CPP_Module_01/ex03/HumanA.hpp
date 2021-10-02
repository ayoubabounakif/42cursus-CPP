/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:38:45 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:38:46 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"

class HumanA
{

	public:
		HumanA( std::string name, Weapon & type);

		std::string	getName( void ) const;
		void		setName( std::string name );

		void		attack( void );

		~HumanA();

	private:
		std::string	_name;
		Weapon		& _type;

};

#endif /* ********************************************************** HUMANA_H */
