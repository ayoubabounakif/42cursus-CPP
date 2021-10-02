/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:31:06 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:31:06 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:
		Weapon( std:: string type );
		~Weapon();

		std::string	getType( void ) const;
		void		setType( std::string type );

	private:
		std::string	_type;

};

#endif /* ********************************************************** WEAPON_H */
