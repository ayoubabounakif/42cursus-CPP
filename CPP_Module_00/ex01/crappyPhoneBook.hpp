/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyPhoneBook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:57:23 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/16 18:57:57 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRAPPYPHONEBOOK_HPP
# define CRAPPYPHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <iomanip>

# include "crappyContactClass.hpp"

# define EQUAL 0

class crappyPhoneBook
{
	public:
		crappyPhoneBook(void);
		~crappyPhoneBook(void);

		void	add(void);
		void	push(Contact instance);
		void	search(void) const;

	private:
		Contact	_contact[8];
		int		_index;
		int		_top;
};
#endif
