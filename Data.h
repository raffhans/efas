#ifndef DATA_H
#define DATA_H


#include <iostream>
#include <fstream>
#include "Degree.h"
#include "Master.h"
#include "PHD.h"
#include <string>
using namespace std;

class Data : public Degree , public Master , public PHD    // Data is derived class of Degree,Master and PHD
{
 //	private:
 		
 	public:
 		string getLevelData(Student A){return A.getLevel();}	// function to return level user input
 		string getCourseData(Student A){return A.getCourse();}	// function to return course name user input
 		double DegreeCourseCost(string);						// function to return fee course per semester for degree
 		double MasterCourseCost(string);						// function to return fee course per semester for master
 		double PHDCourseCost(string);							// function to return fee course per semester for PHD
 		
};

double Data::DegreeCourseCost(string degree)			// function to return fee course per semester for degree and accept course
{
	fstream file;										// file is the object i guess not sure what this term call
	file.open("Degree.txt",ios::in);                    // To open Degree text file that has course name and the fee for the course per semester
	string CourseDegree[999];  							// Array that will store the name course that written in the text file degree.txt
	double DegreeCost[999];								// Array that will store the fee per semester that written after the course name							// 
	double coursecost_degree;                           // a variable to store fee per semester;
	
    if(file.fail())             // checks to see if file opended 
    { 
      cout << "error" << endl; 
      return 1;                 // no point continuing if the file didn't open...
    } 
     
    int i =0;     
    
while(file>>CourseDegree[i]>>DegreeCost[i])   // This while loop will read the file and store every each of information into the array
{											  // until the end of the file

	i++;									 
}


	for(int y=0;y<i;y++)					   // this for loop is to find fee per semester based on the course user input in the coursedegree array
	{
		if(CourseDegree[y] == degree )         // for example if CourseDegree[2] is similar to course user input
		{
			 coursecost_degree=DegreeCost[y];  // it will set the variable coursecost_degree = DegreeCost[2]
		}
	}
	
	file.close();		                       // to close file degree.txt
	
    
    return coursecost_degree;				   // it will return the fee per semester
}
double Data::MasterCourseCost(string master)			// function to return fee course per semester for master and accept course
{
	fstream xfile;										// file is the object i guess not sure what this term call
	xfile.open("Master.txt",ios::in);					// To open Master text file that has course name and the fee for the course per semester
	string CourseMaster[999];                           // Array that will store the name course that written in the text file Master.txt
	double MasterCost[999];                             // Array that will store the fee per semester that written after the course name
	double coursecost_master;                           // a variable to store fee per semester for master;
	
   if(xfile.fail())        // checks to see if file opended 
    { 
      cout << "error" << endl; 
      return 1;            // no point continuing if the file didn't open...
    } 
    
   int i =0;
   
while(xfile>>CourseMaster[i]>>MasterCost[i])           // This while loop will read the file and store every each of information into the array
{													   // until the end of the file

	i++;
}


	for(int y=0;y<i;y++)				// this for loop is to find fee per semester based on the course user input in the courseMaster array
	{
		if(CourseMaster[y] == master )	// for example if CourseMaster[2] is similar to course user input
		{
			 coursecost_master = MasterCost[y] ;   // it will set the variable coursecost_master = MasterCost[2]
		}
	}
	
	xfile.close();                      // to close file Master.txt
	
    return coursecost_master;           // it will return the fee per semester
    }

double Data::PHDCourseCost(string phd)			//function to return fee course per semester for PHD
{
	fstream myfile;								// file is the object i guess not sure what this term call
	myfile.open("PHD.txt",ios::in);             // To open PHD text file that has course name and the fee for the course per semester
	string CoursePHD[999];                      // Array that will store the name course that written in the text file PHD.txt
	double PHDCost[999];                        // Array that will store the fee per semester that written after the course name
	double coursecost_phd;                      // a variable to store fee per semester for master;
	
   if(myfile.fail())        // checks to see if file opended 
    { 
      cout << "error" << endl; 
      return 1;            // no point continuing if the file didn't open...
    } 
    
      int i =0;
      
while(myfile>>CoursePHD[i]>>PHDCost[i])         // This while loop will read the file and store every each of information into the array
{                                               // until the end of the file

	i++;
}
       
	
	for(int y=0;y<i;y++)			// this for loop is to find fee per semester based on the course user input in the coursePHD array
	{
		if(CoursePHD[y] == phd )	// for example if CoursePHD[2] is similar to course user input
		{
			 coursecost_phd = PHDCost[y];      // it will set the variable coursecost_phd = PHDCost[2]
		}
	}                             
	
	myfile.close();                         // to close file PHD.txt
	
    return coursecost_phd;            // return fee per semester for PHD
    }
	
#endif

