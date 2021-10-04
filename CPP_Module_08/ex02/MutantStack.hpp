/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:15:15 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 18:54:53 by aabounak         ###   ########.fr       */
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

template < typename T >
class MutantStack : public std::stack <T>
{

	public:
		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();

		MutantStack &	operator=( MutantStack const & rhs );

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */