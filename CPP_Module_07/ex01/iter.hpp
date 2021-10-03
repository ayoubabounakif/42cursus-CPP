/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:27:33 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/03 17:23:23 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template < typename T >
void    iter( T * arr, int const arrLength, void func( T const & )) {
    for (int i = 0; i < arrLength; i++)
        func(arr[i]);
    return ;
}

template< typename T >
void    print( T const & x ) {
    std::cout << x << std::endl;
    return;
}