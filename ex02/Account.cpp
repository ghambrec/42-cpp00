/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:34:59 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 16:23:19 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <string>
#include "Account.hpp"

// definition static member variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{

}

Account::~Account(void)
{
    
}

Account::Account(int initial_deposit)
    :   _accountIndex(_nbAccounts),
        _amount(initial_deposit),
        _nbDeposits(0),
        _nbWithdrawals(0)
{
    // class attributes
    _nbAccounts += 1;
    _totalAmount += checkAmount();

    // output
    _displayTimestamp();
    std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << checkAmount()
    			<< ";created\n";
}

void	Account::_displayTimestamp(void)
{
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    char out[20];
    strftime(out, 20, "[%Y%m%d_%H%M%S] ", &datetime);
    std::cout << out;
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout 	<< "accounts:" << _nbAccounts
    			<< ";total:" << _totalAmount
    			<< ";deposits:" << _totalNbDeposits
    			<< ";withdrawals:" << _totalNbWithdrawals
    			<< "\n";
}

void Account::makeDeposit( int deposit )
{
    int prev_amount = checkAmount();

    // class attributes
    _totalNbDeposits++;
    _totalAmount += deposit;

    // object attributes
    _nbDeposits++;
    _amount += deposit;

    // output
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << prev_amount
				<< ";deposit:" << deposit
				<< ";amount:" << checkAmount()
				<< ";nb_deposits:" << _nbDeposits
    			<< "\n";
}

bool Account::makeWithdrawal( int withdrawal )
{
	int	prev_amount = checkAmount();

	// output
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << prev_amount
				<< ";withdrawal:";

	// logic
	if (checkAmount() < withdrawal)
	{
		std::cout << "refused\n";
		return (false);
	}
	else
	{
		// class attributes
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;

		// object attributes
		_nbWithdrawals++;
		_amount -= withdrawal;

		// output
		std::cout	<< withdrawal
					<< ";amount:" << checkAmount()
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< "\n";
		
		return (true);
	}
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout	<< "index:" << _accountIndex
    			<< ";amount:" << checkAmount()
    			<< ";deposits:" << _nbDeposits
    			<< ";withdrawals:" << _nbWithdrawals
    			<< "\n";
}
