/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:36:42 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:51:39 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form( std::string name, int signGrade, int reqGrade );
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs ); 

		void		beSigned( Bureaucrat const & src );
		virtual void	execute( Bureaucrat const & executor ) const;

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
		class		GradeCannotBeSigned : public std::exception {
			public:
				virtual const char	* what() const throw() {
					return ("Grade Cannot Be Signed");
				}
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_reqGrade;

	

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */