#include <iostream>
#include "Student.h"
#include "Data.h"
#include <fstream>
using namespace std;

int main()
{
	Student A;			//Student class object
	Degree deg;			//Degree classs object
	Master mas;			//Master classs object
	PHD phd;			//PHD class object
	Data file;			//Data class object;
	
	string n;     // student name
	string e;     // Student email
	string ic;	  // ID number
	string c;     // Course Name
	string l;	  // Level qualification
	int m;		  // Matric number
	int s; 		  // Semester
	double P; 	  // fee course per semester
	double cost;  // total fee for the value semester user insert
	
	header_message();
	A.Display(n,e,ic,m,c,l,s);		// Display to ask information from user
	 A.SetInfo(n,e,ic,m,c,l,s);		// Set  to all variables in private student class
   system("cls");					// to clear screen
   
   header_message();
   if (l == "degree" || l == "Degree")      // condition for the user insert level = degree/Degree
   {
   		P = file.DegreeCourseCost(c);		// This function accept course name and return the fee of the course per semester
   			deg.setValDegree(P);			// This function will set P as private variables in Degree class
   			deg.SetSem(s);					// This function will set s as private variables in Degree class
   		cost = deg.CalcDegree();			// This function will calculate total fee for the amount Semester user enter and return total fee
   }
 
   else if (l == "Master" || l == "master")	// condition for the user insert level = master/Master
   {
   		
   		P = file.MasterCourseCost(c);		// This function accept course name and return the fee of the course per semester
   		mas.setValMaster(P);				// This function will set P as private variables in Master class
   		mas.SetSem(s);                      // This function will set s as private variables in Master class
   		cost = mas.CalcMaster();			// This function will calculate total fee for the amount Semester user enter and return total fee
   }
   
   else if (l == "PHD" || l == "phd")       // condition for the user insert level = phd/PHD
   {
   	
   		P  = file.PHDCourseCost(c);         // This function accept course name and return the fee of the course per semester
   			phd.setValPHD(P);               // This function will set P as private variables in PHD class
   			phd.SetSem(s);                  // This function will set s as private variables in PHD class
   		cost = phd.CalcPHD();               // This function will calculate total fee for the amount Semester user enter and return total fee
   }
     

   
    A.DisplayInfo(); 					    // Display all information (end of program)
    cout << " Total fee: " << cost << endl;
    cout << " Fee Per Semester: " << P << endl;
    cout << " -------------------------------------------------------------------------------------" << endl;
    end_message();
    
	return 0;
}




