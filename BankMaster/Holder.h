#pragma once
#include <string>

class Holder
{
public:
	Holder(std::string holderName, std::string itinNumber);

private:
	std::string m_holderName;

	std::string m_itinNumber;

public:

	std::string getHolderName() { return m_holderName; }

	std::string getItinNumber() { return m_itinNumber; }

};

