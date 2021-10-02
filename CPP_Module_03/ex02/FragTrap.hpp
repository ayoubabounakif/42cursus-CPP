/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:27:48 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/25 13:11:02 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap();

		void			highFivesGuys( void );

		FragTrap &		operator=( FragTrap const & rhs );

	private:

};

#endif /* ******************************************************** FRAGTRAP_H */