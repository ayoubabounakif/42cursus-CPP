/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:24:12 by aabounak          #+#    #+#             */
/*   Updated: 2021/10/01 10:50:54 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		
		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void		incrementGrade( void );
		void		decrementGrade( void );

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
		int					_grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */