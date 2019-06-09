/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the ant class for the langstons ant program
*******************************************************************************/


#ifndef ZOO_HPP
#define ZOO_HPP

#include "Penguin.hpp"
#include "Tiger.hpp"
#include "Turtle.hpp"


class Zoo : public Animal
{
private:
	int days; 
	double moneyInBank; 
	int numOfPenguin; 
	int numOfTiger; 
	int numOfTurtle; 
	Penguin *penguinArray = new Penguin[10]  ;
	Tiger *tigerArray = new Tiger[10] ;
	Turtle *turtleArray = new Turtle[10];


public:
	Zoo(); 
	
	
	void startZoo(); 
	void addTiger(); 
	int getNumOfTiger(); 
	void subtractTigerCost(); 
	void showTigers(); 
	void addPenguin(); 
	int getNumOfPenguin(); 
	void subtractPenguinCost(); 
	void showPenguins(); 
	void addTurtle(); 
	int getNumOfTurtle(); 
	void subtractTurtleCost(); 
	void showTurtles(); 
	double getMoneyInBank(); 
	void setMoneyInBank(double); 
	void addDay(); 
	void subtractTotalFoodCost(); 
	void payoffForDay(); 
	void buyAnotherAnimal(); 
	void addAdultTurtle(); 
	void addAdultTiger(); 
	void addAdultPenguin(); 
	void randEvent(); 
	void animalSickness(); 
	void attendanceBoom(); 
	void babyBorn(); 
	void removeTiger(); 
	void removeTurtle(); 
	void removePenguin(); 
	void increaseTigerArray(); 
	void increaseTurtleArray(); 
	void increasePenguinArray(); 
	void validateint(int&); 
	void validateChar(char &); 
	void validateAnimal(int&);
	

	~Zoo();
};

#endif

