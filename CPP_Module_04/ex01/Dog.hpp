/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:23:29 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 15:38:31 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		Dog( Dog const & src );
		Dog &	operator=( Dog const & rhs );
		virtual ~Dog();

		void	makeSound( void ) const;
		Brain *	getBrain( void ) const;

	private:
		Brain *	_brain;
};

#endif /* ************************************************************* DOG_H */