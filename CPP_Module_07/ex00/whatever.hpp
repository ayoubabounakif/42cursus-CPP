/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:06:08 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/03 14:35:11 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template < typename T>
T const & max( T const & x, T const & y) {
    return (x >= y ? x : y);
}

template < typename T>
T const & min( T const & x, T const & y) {
    return (x <= y ? x : y);
}

template < typename T>
void swap( T & x, T & y) {
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
}