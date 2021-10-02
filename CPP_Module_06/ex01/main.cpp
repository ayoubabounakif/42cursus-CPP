/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 09:40:41 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/02 11:52:32 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstdint>

typedef struct s_data {
	int			integer;
	std::string	random;
}				Data;

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int	main( void ) {

	Data		*data = new Data();
	uintptr_t	TEST;

	data->integer = 420;
	data->random = "BLESSING";

	std::cout << "BEFORE SERIALIZATION   ->  " << &data << " || " << data->integer << std::endl;
	std::cout << "BEFORE SERIALIZATION   ->  " << &data << " || " << data->random << std::endl;
	
	TEST = serialize(data);
	std::cout << "-------------------------------------------------------" << std::endl;
	data = deserialize(TEST);

	std::cout << "AFTER DESERIALIZATION  ->  " << &data << " || " << data->integer << std::endl;
	std::cout << "AFTER DESERIALIZATION  ->  " << &data << " || " << data->random << std::endl;

	delete data;
	return (EXIT_SUCCESS);
}
