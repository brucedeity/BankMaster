#include "Account.h"

Account::Account(Holder* holder)
{
	m_holder = holder;

	m_balance = 0.0f;
}

void Account::transferMoney(float amount)
{
}

void Account::decreaseBalance(float amount)
{
	m_balance -= amount;
}

void Account::increaseBalance(float amount)
{
	m_balance += amount;
}

float Account::getBalance()
{
	return m_balance;
}
