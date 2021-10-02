/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:35:39 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/02 16:50:03 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstdint>
# include <stdexcept>
# include <iomanip>

int     main( int ac, char **av)
{
    if (ac != 2) {
        std::cout << "error: bad arguments" << std::endl;
        return (EXIT_FAILURE);
    }
    else
    {
                    // CHAR
        try {
            if (std::stoi(av[1]) > 255) {
                throw (nullptr);
            }
            char    c = static_cast<char>(std::stoi(av[1]));
            if (c >= 32 && c <= 127) {
                std::cout << "char: " << c << std::endl;
            }
            else
                std::cout << "char: Non displayable" << std::endl;
        } catch ( ... ) {
            std::cout << "char: impossible" << std::endl;
        }

                    // INT
        try {
            if (std::stoi(av[1]) > INT_MAX) {
                throw (nullptr);
            }
            int    i = static_cast<int>(std::stoi(av[1]));
            std::cout << "int: " << i << std::endl;
        } catch ( ... ) {
            std::cout << "int: impossible" << std::endl;
        }

                    // FLOAT
        try {
            float    f = static_cast<float>(std::stof(av[1]));
            std::cout << std::fixed;
            std::cout.precision(1);
            std::cout << "float: " << f << "f" << std::endl;
        } catch ( ... ) {
            std::cout << "float: impossible" << std::endl;
        }

                    // DOUBLE
        try {
            double    d = static_cast<double>(std::stof(av[1]));
            std::cout << std::fixed;
            std::cout << "double: " << d << std::endl;
        } catch ( ... ) {
            std::cout << "double: impossible" << std::endl;
        }
    }
    return (EXIT_SUCCESS);
}