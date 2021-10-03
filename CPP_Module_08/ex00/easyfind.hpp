/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:01:51 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/03 17:50:44 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <list>

template < typename T >
void    easyfind( T intContainer, int toFind ) {
    
    intContainer::iterator it = intContainer.begin();
    
    for (; it != intContainer.end(); ++it)
    {
        std::cout << *it << std::endl;
        if (*it == toFind)
            return (*it);
    }
    return ;
}

