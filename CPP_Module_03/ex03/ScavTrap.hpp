/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:14:38 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/25 13:10:50 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		virtual ~ScavTrap();

		virtual void 	guardGate();

		ScavTrap &		operator=( ScavTrap const & rhs );

	protected:
		ScavTrap();

};

#endif /* ******************************************************** SCAVTRAP_H */