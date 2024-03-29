/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the ant class for the langstons ant program
*******************************************************************************/


#include "Turtle.hpp"

Turtle::Turtle()
{
	this->age = 1; 
	this->cost = 100;
	this->numOfBabies = 10;
	this->baseFoodCost = 10;
	this->payoff = 0.05;
}


//Finds the food cost for the turtles
double Turtle::turtleFoodCost()
{
	double base = getBaseFoodCost();

	return base * 0.5;
}


Turtle::~Turtle()
{
}
