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

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed
{

	public:
		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );

	private:
		int					_fixedPointValue;
		static const int	_nbFractionalBits = FIXED_POINT_FRACTIONAL_BITS;

};

#endif /* *********************************************************** FIXED_H */
