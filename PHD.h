#ifndef PHD_H
#define PHD_H

#include "Student.h"
#include<iostream>
using namespace std;

class PHD : public Student				//PHD is derived class of student class
{
	private:
	    double FeePerSem;		            //Total price per semester for the choice of course

	    
	public:
		PHD(){FeePerSem=0;}	//Default constructor
		PHD(double);				//Constructor
		~PHD();					//Destructor
		void setValPHD(double);	//Set function
		double CalcPHD();		//To calculate the total fee for the value semester the user input
};	

PHD::PHD(double p)		//Constructor
{
	FeePerSem=p;
}

PHD::~PHD()		//Destructor
{
	FeePerSem=0;
}

double PHD::CalcPHD() //To calculate the total fee for the value semester the user input
{
	return this->getSem() * FeePerSem;	// It will get the public function from Base class (Student class) and multiple
											// the fee cost per Semester and return it

}

void PHD::setValPHD(double p)				//Set fuunction
{
	FeePerSem=p;
}
#endif
