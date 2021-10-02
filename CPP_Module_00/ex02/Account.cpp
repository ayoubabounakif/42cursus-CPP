/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:21:20 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/19 14:21:22 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Account.hpp"
# include <iostream>

// ****************************** //
//	Static variables initializer  //
// ****************************** //
int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// ****************************** //
//			 Subroutines		  //
// ****************************** //

/*
**	Constructors
*/
Account::Account(void)
{
	return ;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = 0;
	this->_accountIndex += Account::getNbAccounts();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << " ";
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created" <<
	std::endl;
	return ;
}

/*
**	Destructor
*/
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" <<
	std::endl;
	return ;
}

// ****************************** //
//			 Accessors			  //
// ****************************** //

/*
**	Getters
*/
int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

// ****************************** //
//			  Methods			  //
// ****************************** //

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits <<
	std::endl;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = this->_amount;
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";";
	if (this->_amount > withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout
			<< "withdrawal:" << withdrawal << ";"
			<< "amount:" << this->_amount << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		return (EXIT_SUCCESS);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (EXIT_FAILURE);
	}
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout
		<< "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals() <<
	std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:"<< this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals <<
	std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);
    std::tm * now = std::localtime(&t);
    std::cout
		<< "["
		<< (now->tm_year + 1900) << (now->tm_mon + 1) << now->tm_mday
		<< "_"
		<< now->tm_hour << now->tm_min << now->tm_sec
		<< "]";
	return ;
}
