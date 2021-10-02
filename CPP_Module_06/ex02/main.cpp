/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:38:13 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/02 12:31:20 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

class Base
{
    public:
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base    * generate( void )
{
    srand(time(NULL));
    int randNum = (rand() % 3) + 1;

    if (randNum == 1)
        return (new A);
    if (randNum == 2)
        return (new B);
    if (randNum == 3)
        return (new C);
    return (nullptr);
}

void    identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}


void    identify(Base& p)
{
    try {
        A & test = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        ( void )test;
    } catch ( std::exception &e ) {
        std::cerr << "A: " << e.what() << std::endl;
    }
    try {
        B & test = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        ( void )test;
    } catch ( std::exception &e ) {
        std::cerr << "B: " << e.what() << std::endl;
    }
    try {
        C & test = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        ( void )test;
    } catch ( std::exception &e ) {
        std::cerr << "C: " << e.what() << std::endl;
    }
}

int     main( void )
{
    Base * base = generate();

    std::cout << "-------- Base *p --------" << std::endl;
    identify(base);
    std::cout << "-------- Base &p --------" << std::endl;
    identify(*base);

    return (EXIT_SUCCESS);
}