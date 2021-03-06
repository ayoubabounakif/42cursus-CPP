/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:01:49 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/03 17:01:04 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main ( int, char ** )
{
    Array<int> eurrr = Array<int>(10);
    for (unsigned int i = 0; i < 15; i++)
    {
        try {
            std::cout << eurrr[i] << std::endl;
        }
        catch ( std::exception &e ) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << eurrr.size() << std::endl;
    return (EXIT_SUCCESS);
}