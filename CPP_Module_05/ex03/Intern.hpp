/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:57:39 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 12:40:08 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &	operator=( Intern const & rhs );

		Form *	makeForm( std::string formName, std::string formTarget );

		class		FormNotFound : public std::exception {
		public:
			virtual const char	* what() const throw() {
				return ("Form not found!");
			}
		};

	private:

};

#endif /* ********************************************************** INTERN_H */