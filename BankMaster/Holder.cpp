#include "Holder.h"

Holder::Holder(std::string holderName, std::string itinNumber)
{
	m_holderName = holderName;

	m_itinNumber = itinNumber;

	count++;
}

Holder::~Holder()
{
	count--;
}
