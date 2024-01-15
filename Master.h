#ifndef MASTER_H
#define MASTER_H

#include "Student.h"

#include <iostream>
using namespace std;

class Master : public Student                 // Master is derived class of student
{
	private:
	    double FeePerSem;		              //Total fee per semester for the choice of course
	 
	    
	public:
		Master(){FeePerSem=0;}	//Default constructor
		Master(double);                //Constructor
		~Master();					//Destructor
		void setValMaster(double);		//set function
		double CalcMaster();		//To calculate the total fee for the value semester the user input
};

Master::Master(double p)	//Constructor
{
	FeePerSem=p;
}

Master::~Master()		//Destructor
{
	FeePerSem=0;
}

double Master::CalcMaster() 	//To calculate the total fee for the value semester the user input
{
	return this->getSem() * FeePerSem; // It will get the public function from Base class (Student class) and multiple
									     // the fee cost per Semester and return it
}

void Master::setValMaster(double p)  // set function
{
	FeePerSem=p;
}
#endif
