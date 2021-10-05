/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:17:09 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/05 11:32:24 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main( int, char ** )
{
    MutantStack<int> mstack;
    mstack.push(17);
    mstack.pop();
    mstack.push(42);
    mstack.push(5);
    mstack.push(1337);
    mstack.push(420);
    // [...]
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    --it;
    it--;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
