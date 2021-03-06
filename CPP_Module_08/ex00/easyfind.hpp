/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:01:51 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 17:32:09 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

template < typename T >
void    easyfind( T intContainer, int toFind ) {
    
    typename T::iterator it;
    it = std::find(intContainer.begin(), intContainer.end(), toFind);
    if (*it == toFind)
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "The element was not found!" << std::endl;
    return ;
}

