/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:22:25 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 12:22:26 by aabounak         ###   ########.fr       */
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
		Zombie( std::string name );
		~Zombie();

		std::string		getName( void ) const;
		void			announce( void ) const;

	private:
		std::string		_name;

};

Zombie* 	newZombie( std::string name );
void		randomChump( std::string name );

#endif /* ********************************************************** ZOMBIE_H */
