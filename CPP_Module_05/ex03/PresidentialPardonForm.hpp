/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:02:05 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/30 19:04:17 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );

		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget( void ) const;

	private:
		std::string	_target;
};



#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */