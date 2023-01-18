#pragma once

class Holder;

class Account
{
	Account(Holder* holder);

	Holder* m_holder;

	void transferMoney(float amount);

	void decreaseBalance(float amount);

	void increaseBalance(float amount);
};

