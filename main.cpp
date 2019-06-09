/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This main file for the zoo tycoon program
*******************************************************************************/


#include "Animal.hpp"
#include "Tiger.hpp"
#include "Zoo.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"

#include <iostream>


void validateInt(int &i);

int main()
{
	
	int days = 1; 
	int again = 1;
	bool game = true;
       Zoo z; 	
	while (game == true)
	{


		z.startZoo();


		z.setBaseFoodCost();


		while (again == 1)
		{
			double money = z.getMoneyInBank();

			//Checks to see if the money is still positive
			if (money <= 1)
			{
				again = 2; 
				std::cout << "\n\nGAME OVER\n\n\n";
				std::cout << "\nYou went backrupt\n\n";
				exit(0); 
				
			}



			z.showTigers();
			z.showPenguins();
			z.showTurtles();


			std::cout << "Money in Bank: $" << z.getMoneyInBank() << std::endl;
			std::cout << "Day number: " << days << std::endl;
			std::cout << std::endl;


			//Pause until user presses enter
			std::cin.clear();
			std::cin.sync();
			std::cin.ignore();

			days++;
			z.addDay(); //Adds a day to the animals in the array
			z.subtractTotalFoodCost();
			z.payoffForDay();


			z.randEvent();

			z.buyAnotherAnimal();

			//Asks user if they'd like to continue
			std::cout << "Enter 1 to continue playing or 2 to quit: ";
			std::cin >> again;
			validateInt(again);

		}


		std::cout << "\n\nGoodbye\n\n";
                 game = false; 
	}


	return 0; 
}



//Validation of 1 or 2
void validateInt(int &i)
{
	while (!std::cin || (i != 1 && i != 2))
	{
		std::cin.clear();
		std::cin.sync();
		//std::cin.ignore();
		std::cout << "\nInvalid input! Try again: ";
		std::cin >> i;
	}
}

