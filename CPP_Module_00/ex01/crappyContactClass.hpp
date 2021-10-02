/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyContactClass.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:09:10 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/19 14:09:36 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	__CRAPPYCONTACTCLASS_HPP__
# define __CRAPPYCONTACTCLASS_HPP__

# include "crappyPhoneBook.hpp"

class Contact
{
	public:
		Contact(std::string value []);
		Contact(void);
		~Contact(void);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;
		void    setFirstName(std::string value);
		void    setLastName(std::string value);
		void    setNickName(std::string value);
		void    setPhoneNumber(std::string value);
		void    setDarkestSecret(std::string value);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};
#endif