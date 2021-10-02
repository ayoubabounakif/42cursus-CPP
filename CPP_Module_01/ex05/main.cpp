/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:07:12 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 17:07:30 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int	main(void)
{
	Karen	Karen;

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	return (EXIT_SUCCESS);
}
