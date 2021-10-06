/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:15:15 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/05 14:10:06 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <deque>
# include <list>
# include <vector>
# include <stack>

template < class T, class Container = std::deque<T> >
class MutantStack : public std::stack <T>
{
	public:
		MutantStack() { std::cout << "MutantStack Constructor called" << std::endl; };
		MutantStack( MutantStack const & src ) {
			std::cout << "MutantStack Copy Constructor called" << std::endl;
			*this = src; };
		~MutantStack() { std::cout << "MutantStack Destructor called" << std::endl; };
		MutantStack &	operator=( MutantStack const & rhs ) {
			(void)rhs;
			return (*this);
		};
		
		typedef	typename		std::stack<T>::container_type::iterator iterator;
		iterator				begin() { return ( std::stack<T>::c.begin() ); };
		iterator				end() { return ( std::stack<T>::c.end() ); };
		typedef	typename		std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator			begin() const { return ( std::stack<T>::c.begin() ); };
		const_iterator			end() const { return ( std::stack<T>::c.end() ); };
		typedef	typename		std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator		rbegin() { return ( std::stack<T>::c.rbegin() ); };
		reverse_iterator		rend() { return ( std::stack<T>::c.rend() ); };
		typedef	typename		std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator	rbegin() const { return ( std::stack<T>::c.rbegin() ); };
		const_reverse_iterator	rend() const { return ( std::stack<T>::c.rend() ); };
};

#endif /* ***************************************************** MUTANTSTACK_H */