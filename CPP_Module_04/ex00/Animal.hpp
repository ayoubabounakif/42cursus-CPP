/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:08:22 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 14:17:22 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal( std::string type );
		Animal( Animal const & src );
		Animal &	operator=( Animal const & rhs );
		virtual	~Animal( void );

		std::string		getType( void ) const;
		virtual void	makeSound() const;

	protected:
		std::string	_type;

};

#endif /* ********************************************************** ANIMAL_H */