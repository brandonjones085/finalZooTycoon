/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the header file for the Tiger class which inherits from the Animal class
*******************************************************************************/

#ifndef TIGER_HPP
#define TIGER_HPP

#include "Animal.hpp"

class Tiger : public Animal
{
protected: 
	

public:
	Tiger(); 
	double tigerBaseFoodCost();
	
	
	~Tiger();
};

#endif
