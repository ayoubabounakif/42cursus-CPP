/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:44:06 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/04 14:59:24 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main( void )
{

/*     std::cout << "---------- Constructors -----------" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "-------------------------------" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // Will output the cat sound!
    j->makeSound();

    std::cout << "---------- Destructors -------------" << std::endl;

    delete j;   //should not create a leak
    delete i; */

    std::cout << "---------- Brain Class -----------" << std::endl;
    
    std::cout << "---------- Constructors -----------" << std::endl;
    
    Cat obj;
    obj.getBrain()->setIdeas("Hi I'm a cat");
    Cat objBis(obj);

    std::cout << "-------------------------------" << std::endl;

    std::cout << "obj : -> " << obj.getBrain()->getIdea(0) << std::endl;
    std::cout << "objBis : -> " << objBis.getBrain()->getIdea(0) << std::endl;

    std::cout << "---------- Destructors -------------" << std::endl;
    
    return (EXIT_SUCCESS);
}
