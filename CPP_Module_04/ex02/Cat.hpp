/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:23:29 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 15:37:47 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		Cat &	operator=( Cat const & rhs );
		virtual ~Cat();
	
		void	makeSound( void ) const;
		Brain *	getBrain( void ) const;

	private:
		Brain *	_brain;
};

#endif /* ************************************************************* CAT_H */