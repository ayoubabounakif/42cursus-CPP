/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:07:49 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 17:07:50 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	public:
		Karen();
		~Karen();

		void    complain( std::string level );

	private:
		void    _debug( void );
        void    _info( void );
        void    _warning( void );
        void    _error( void );
};

typedef void (Karen::*myPointerToFunction)(void);

#endif /* *********************************************************** KAREN_H */
