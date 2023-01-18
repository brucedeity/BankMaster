#pragma once

class Holder;

class Account
{
public:
	Account(Holder* holder);

private:

	Holder* m_holder;

	float m_balance;

public:
	void transferMoney(float amount);

	void decreaseBalance(float amount);

	void increaseBalance(float amount);

	float getBalance();
};

