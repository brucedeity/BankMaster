#include "InputHandler.h"
#include "Holder.h"
#include <iostream>

InputHandler::InputHandler()
{

}

void InputHandler::greetUser()
{
	std::cout << "Choose an option:\n";
}

int InputHandler::askForUserInputs()
{
	int option;

	if (Holder::getHolderCount() < 1) {
		std::cout << "1: Create a holder \n";

	}
	else
	{

	}

	std::cout << "X: Exit";

	std::cin >> option;

	handleUserInput(&option);
}

void InputHandler::handleUserInput(int *option)
{
	std::cout << "Choosed option: " << *option;
}
