/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:27:03 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/03 15:01:36 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

class Awesome {
    public:
        Awesome( void ) : _n( 420 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main( int, char ** ) {
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter( tab, 5, print );
    std::cout << "--------" << std::endl;
    iter( tab2, 5, print );
    return EXIT_SUCCESS;
}

/* int main ( int, char ** ) { {
    int arr[3] = {42, 420, 666};
    int size   = 3;
    iter<int>( arr, size, print );
    } std::cout << "--------" << std::endl; {
        double arr[3] = {42, 420, 666};
        int    size   = 3;
        iter<double>( arr, size, print );
    } std::cout << "--------" << std::endl; {
        float arr[3] = {42, 420, 666};
        int   size   = 3;
        iter<float>( arr, size, print );
    } std::cout << "--------" << std::endl; {
        std::string arr[3] = {"Monk", "Boo Johnson", "Gary"};
        int         size   = 3;
        iter<std::string>( arr, size, print );
    }
    return (EXIT_SUCCESS);
} */