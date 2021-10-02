/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:28:14 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/22 16:28:15 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed
{

	public:
		Fixed( void );
		Fixed( const int number );
		Fixed( const float number );
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );

		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					_fixedPointValue;
		static const int	_nbFractionalBits = FIXED_POINT_FRACTIONAL_BITS;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );


#endif /* *********************************************************** FIXED_H */
