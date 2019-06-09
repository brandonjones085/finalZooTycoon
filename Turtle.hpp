/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the ant class for the langstons ant program
*******************************************************************************/

#ifndef TURTLE_HPP
#define TURTLE_HPP

#include "Animal.hpp"
class Turtle : public Animal
{

public:
	Turtle();
	double turtleFoodCost(); 
	
	~Turtle();
};


#endif
