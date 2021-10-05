/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:01:48 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 18:54:54 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <exception>

template < typename T >
class Array
{
    private:
        T   *        _arr;
        unsigned int _size;

    public:
        Array( void ) { _arr = NULL; _size = 0; };
        Array( unsigned int n ) { this->_arr = new T [n] (); this->_size = n; };
        Array( Array const & src ) { *this = src; };
        ~Array( void ) { delete [] this->_arr; };
        
        Array &  operator=( Array const & rhs ) {
            if (this != &rhs) {
                this->_arr = rhs._arr;
                this->_size = rhs._size;
            }
            return (*this);
        }
        T &  operator[](unsigned int index) {
            if (index < _size)
                return (this->_arr[index]);
            throw ElementOutOfBound();
        };

        unsigned int size( void ) {
            return (this->_size);
        };

        class		ElementOutOfBound : public std::exception {
        public:
            virtual const char	* what() const throw() {
                return ("Element out of bound.");
            }
		}; 
};