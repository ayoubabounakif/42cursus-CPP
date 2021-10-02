/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:23:29 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 13:22:06 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		Cat &	operator=( Cat const & rhs );
		virtual ~Cat();
	
		void		makeSound( void ) const;

	private:
};

#endif /* ************************************************************* CAT_H */