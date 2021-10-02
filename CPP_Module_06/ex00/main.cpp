/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:35:39 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/02 13:18:24 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstdint>

int     main( int ac, char **av)
{
    if (ac != 2) {
        std::cout << "error: bad arguments" << std::endl;
        return (EXIT_FAILURE);
    }
    else
    {
        std::cout << av[1] << std::endl;
    }
    return (EXIT_SUCCESS);
}