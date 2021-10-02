/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:21:59 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:21:59 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie();
		Zombie( std::string );
		~Zombie();

		std::string		getName( void ) const;
		void			setName( std::string name );
		void			announce( void ) const;

	private:
		std::string		_name;

};

Zombie*		zombieHorde( int N, std::string name );

#endif /* ********************************************************** ZOMBIE_H */
