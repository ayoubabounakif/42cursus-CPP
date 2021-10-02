/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:36:42 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:51:16 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form( std::string name, int signGrade, int reqGrade );
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs ); 

		void		beSigned( Bureaucrat const & src );

		std::string	getName( void ) const;
		bool		getSign( void ) const;
		int			getSignGrade( void ) const;
		int			getReqGrade( void ) const;

		class		GradeTooHighException : public std::exception {
			public:
				virtual const char	* what() const throw() {
					return ("Grade Too High Exception");
				}
		};

		class		GradeTooLowException : public std::exception {
			public:
				virtual const char	* what() const throw() {
					return ("Grade Too Low Exception");
				}
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_reqGrade; // Execute

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */