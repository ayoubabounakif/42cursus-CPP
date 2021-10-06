/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:17:09 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/05 12:16:33 by aabounak         ###   ########.fr       */
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
    std::cout << mstack.empty() << std::endl;
    std::cout << "---- Iterator ----" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "---- METHODS ----" << std::endl;
    std::stack<int> s(mstack);
    std::cout << s.top() << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << s.empty() << std::endl;
    s.push(17);
    s.pop();
    std::cout << "---- Iterator ----" << std::endl;
    it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        *it = 420;
        std::cout << *it<< std::endl;
        ++it;
    }
    std::cout << "---- Reverse Iterator ----" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }
    return 0;
}
