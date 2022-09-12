#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:"<< getNbAccounts()<<";"<< "total:"<< getTotalAmount()<<";"<< "deposits:"<<getNbDeposits()<<";"<< "withdrawals:"<< getNbWithdrawals()<< std::endl;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    //initializing vars
    _accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;;
    _accountIndex = _nbAccounts;
    //adding one account
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    //addition message
    std::cout << "index:"<< _accountIndex<<";"<< "amount:"<< _amount<<";"<< "created" <<std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";"<<"amount:"<< _amount<<";"<< "closed"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();  
    std::cout << "index:" << _accountIndex <<";" << "p_amount:" << _amount <<";" ;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "deposit:" << deposit <<";" << "amount:" << _amount <<";" << "nb_deposits:" << _nbDeposits << std::endl;

}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if(withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex <<";" << "p_amount:" << _amount <<";"
        <<"withdrawal:refused"<<std::endl;
        return false;
    }
    std::cout << "index:" << _accountIndex <<";"<< "p_amount:" << _amount<<";";
    _nbWithdrawals ++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "widthrawal:" << withdrawal <<";"<< "amount:" << _amount <<";" \
    << "nb_widthrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const
{
    return(_amount);
}

void Account::displayStatus(void) const
{
     _displayTimestamp();
     std::cout<<"index:"<<_accountIndex<<";"<<"amount:"<<_amount<<";"<< "deposits:"<<_nbDeposits<<";"<<"withdrawals:" <<_nbWithdrawals <<std::endl;
}

Account::Account(void)
{
 
}

void	Account::_displayTimestamp( void )
{
    std::cout << "[";
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    int year_time = (now->tm_year + 1900)*10000 + (now->tm_mon + 1)*100 + now->tm_mday;
    int day_time = now->tm_hour*10000 + now->tm_min *100 + now->tm_sec;
    std::cout   <<year_time
                << "_"
                << day_time;
    std::cout <<"] ";
}



//maybe initialize static vars

//print out deposit stuff too
//display timestamp each function you show stuff on

//init normal vars
// add ;
