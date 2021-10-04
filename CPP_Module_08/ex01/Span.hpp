/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:58:12 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 14:42:48 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <array>
# include <list>
# include <vector>
# include <span>

class Span
{
	public:
		Span( unsigned int N );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void			addNumber( unsigned int number ) const;
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		unsigned int	getN( unsigned int i ) const;

		class		StorageFull : public std::exception {
        public:
            virtual const char	* what() const throw() {
                return ("Storage full");
            }
		};
		class		NoSpan : public std::exception {
        public:
            virtual const char	* what() const throw() {
                return ("No span to find");
            }
		}; 
		class		OutOfBounds : public std::exception {
        public:
            virtual const char	* what() const throw() {
                return ("Element out of bound");
            }
		};

	private:
		unsigned int	* _N;
		unsigned int	_maxSize;

};

#endif /* ************************************************************ SPAN_H */