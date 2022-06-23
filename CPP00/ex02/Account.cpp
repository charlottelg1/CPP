/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <cle-gran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:31:24 by cle-gran          #+#    #+#             */
/*   Updated: 2022/06/23 20:39:28 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";created";
    std::cout << std::endl;
    _totalAmount += this->_amount;
    _nbAccounts++;
    return;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";closed";
    std::cout << std::endl;
    return;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts<< ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
    return;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    this->_nbDeposits++;
    std::cout << " index:" << this-> _accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit; 
    std::cout << "deposits:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this-> _nbDeposits;
    std::cout << std::endl;
    _totalNbDeposits++;
    _totalAmount += deposit;
    return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (withdrawal < this->_amount)
    {
        this->_nbWithdrawals++;
        std::cout << " index:" << this-> _accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        this->_amount -= withdrawal; 
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout << "nb_withdrawal:" << this-> _nbWithdrawals;
        std::cout << std::endl;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
    } 
    else
    {
        std::cout << " index:" << this-> _accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout << "withdrawal:" << "refused";
        std::cout << std::endl;
        return (0);
    }
    return (1);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << this-> _accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this-> _nbDeposits << ";";
    std::cout << "withdrawals:" << this-> _nbWithdrawals;
    std::cout << std::endl;
    return;
}

void	Account::_displayTimestamp( void )
{
    char        buffer[18];
    time_t      now;
    struct tm   *ptm;
    time(&now);
    ptm = localtime(&now);
    strftime(buffer, 18, "[%Y%m%d_%H%M%S]", ptm);
    std::cout << buffer;
    return;
}
