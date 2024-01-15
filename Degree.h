#ifndef DEGREE_H
#define DEGREE_H

#include "Student.h"
#include<iostream>
using namespace std;

class Degree:public Student        //Degree is derived class of Student
{
	private:
	    double FeePerSem;		    //Total price per semester for the choice of course

	public:
		Degree(){FeePerSem=0;}	//Default constructor
		Degree(double);             //Constructor
		~Degree();					//Destructor
		void setValDegree(double);	// Set function
		double CalcDegree();		//To calculate the total fee for the value semester the user input
};

Degree::Degree(double p)			//Constructor
{
	FeePerSem=p;				
}
	
Degree::~Degree()					//Destructor
{
	FeePerSem=0;
}

double Degree::CalcDegree()         // To calculate the total fee for the value semester the user input
{ 
	return this->getSem() * FeePerSem;       // It will get the public function from Base class (Student class) and multiple
}                                              // the fee cost per Semester and return it

void Degree::setValDegree(double p)            // Set function
{
	FeePerSem=p;
}
#endif



