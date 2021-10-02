/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:51:09 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/26 13:19:32 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:

		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal &	operator=( WrongAnimal const & rhs );
		~WrongAnimal( void );

		std::string	getType( void ) const;
		void		makeSound() const;

	protected:
		std::string	_type;

};

#endif /* ***************************************************** WRONGANIMAL_H */