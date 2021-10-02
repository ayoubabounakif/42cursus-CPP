/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:41:45 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 10:41:46 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	* stringPTR = &str;
	std::string & stringREF = str;

	std::cout << "This is the string: 			" << *stringPTR << std::endl;
	std::cout << "This is a pointer to the string:	" << *stringPTR << std::endl;
	std::cout << "This is a reference to the string:	" << stringREF << std::endl;
	return (EXIT_SUCCESS);
}
