/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:10:58 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/25 13:10:54 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		virtual ~ClapTrap();

		ClapTrap &	operator=( ClapTrap const & rhs );

		virtual std::string	getName( void ) const;
		virtual int			getHitPoints( void ) const;
		virtual int			getEnergyPoints( void ) const;
		virtual int			getAttackDamage( void ) const;
		void		setName( std::string name );

		virtual void	attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	protected:
		ClapTrap()		{};
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif /* ******************************************************** CLAPTRAP_H */