/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the Tiger class. 
*******************************************************************************/

#include "Tiger.hpp"


Tiger::Tiger() 
{
	cost = 10000; 
	numOfBabies = 1; 
	 
	payoff = 0.2; 
}

//Finds the food cost for the tigers
double Tiger::tigerBaseFoodCost()
{
	double base = getBaseFoodCost(); 

	return base * 5; 
}



Tiger::~Tiger()
{
}
