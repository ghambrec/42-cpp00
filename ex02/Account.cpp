/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:34:59 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 14:27:34 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <string>
#include "Account.hpp"

Account::Account(void)
{

}

Account::~Account(void)
{
    
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;

    _nbAccounts += 1;
    _totalAmount += _amount;

    // output
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created\n";
}

void	Account::_displayTimestamp(void)
{
    std::cout << "[yyyyMMdd_hhmmss] ";
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
    return (_totalAmount);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals;
    std::cout << "\n";
}

void Account::makeDeposit( int deposit )
{

}

bool Account::makeWithdrawal( int withdrawal )
{

}

int Account::checkAmount( void ) const
{

}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals;
    std::cout << "\n";
}
