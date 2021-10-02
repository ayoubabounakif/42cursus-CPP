/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __main__.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:10:58 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/17 13:11:21 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "crappyPhoneBook.hpp"

int		main(void)
{
	crappyPhoneBook	instance;
	std::string		buffer;

	std::cout << "Please enter one of the following commands : ADD || SEARCH || EXIT" << std::endl;
	while (420)
	{
		std::cout << "Enter your desired command: ";
		getline(std::cin, buffer);
		if (buffer.compare("ADD") == EQUAL)
			instance.add();
		else if (buffer.compare("SEARCH") == EQUAL)
			instance.search();
		else if (buffer.compare("EXIT") == EQUAL)
			return (EXIT_SUCCESS);
		else
			std::cout << "Error" << std::endl << "What you wrote was discarded." << std::endl;
	}
	return (EXIT_SUCCESS);
}
