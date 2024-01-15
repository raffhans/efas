#ifndef STUDENT_H
#define STUDENT_H


#include <fstream>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "Fileinfo.h"
using namespace std;

class Student
{
	private:
		string name;     //student name
		string email;    //Student email
		string IC;		 //ID number
		int matric;		 //Matric number
		string course;   //Course Name
		string level;	 //qualification 
		int semester;	 //Current semester to pay fee
		Fileinfo info;

	public:
		Student(){name="";email="";IC="";matric=0;course="";level="";semester=0;}  //Default constructor
		Student(string,string,string,int,string,string,int);					   //Constructor
		~Student();														           //Destructor
		void Display(string & ,string & ,string & ,int & ,string & ,string &  , int &);	//To display and ask all the information
		void DisplayInfo();                                                        // To display result all of the information user input
		void SetInfo(string ,string ,string ,int ,string ,string  , int );	       //To set all infomation given to a variables;
		string getLevel(){return level;}								           //To get the level qualification
		string getCourse(){return course;}                                         //To get the course name
		void SetSem(int);                                                          //To set Semester to a variable
		int getSem(){return semester;}                                             //To get the semester
		friend void header_message();											   //(Friend function) To display header message
		friend void end_message();												   //{Friend function) To display thank you message
	
        
};


void header_message() 				//To display header message
{
	cout << "\n\t\t\t\t    --- USM FEE PROGRAM ---" << endl;
}

void end_message() 				//To display end message
{
	cout << "\n Thank you for using our program.";
	cout << "\n Please make sure you pay your fees before examination."<< endl;
}

void Student::SetSem(int d)            //To set Semester to a variable d         
{
	semester=d;
}


Student::Student(string n, string e, string ic, int m, string c, string l,int s) // Constructor                                                                            
{																			  
		name = n; 
		email=e;   
		IC = ic;			 
		matric = m;	
		course = c; 
		level = l;
		semester = s; 	
}

Student::~Student()    // Destructor
{
		name = "";    
		email="";
		IC = "";			 
		matric = 0;		 
		course = "";
		level = "";
		semester=0;
}


void Student::Display(string &n, string &e, string &ic, int &m, string &c , string &l, int &s)   //To display and ask all the information
{
	cout << "\n Please enter all info below.\n Please make sure all details are correct before proceeding.\n";  
	
	cout << "\nName: ";
	getline(cin, n);     				// n = student name
	
	cout <<"Matric Number: ";
	cin  >> m;							// m = student matric number
	cin.ignore();						// cin ignore because need to accept string after the int matric
	cout << "Email: ";			
	getline(cin,e);						// e = student email
	
	cout <<"IC number: ";	
    getline(cin,ic);					// ic = student id number
	
    
	cout << "Level Qualification: ";
	getline(cin, l);					// Student current level qualification


	
	system("cls");						// To clear screen
	
	cout << "\n\n Please enter your course with copying the list above." << endl << endl;
	cout << " -------------------------------------------------------------------------------------" << endl;
	 if (l=="degree"||l=="Degree")
	 {
	 	info.DisplayDegreeCourse();
	
	}
	
	 else if (l=="master"||l=="Master")
	 {
	 	info.DisplayMasterCourse();
		
	 }
	 
	 else if (l=="phd"||l=="PHD")
	 {
	 	info.DisplayPHDCourse();
	 }

	cout << " -------------------------------------------------------------------------------------" << endl;
	cout << "\n Course: " << endl;			// Course name must be similar to text file
    getline(cin, c);

    cout << "\n Please enter the amount semester you want to pay for." << endl;		

	cout <<" Semester: " << endl;
	cin  >> s;							// S = semester , this semester is based on the user need to pay for, for example if
	cin.ignore();                       // student want to pay for 3 semester fee, then they need to enter 3 .

}

void Student::SetInfo(string n, string e, string ic, int m, string c ,string l, int s)   // To set all variables to private members of student class
{
		name = n; 
		email=e;   
		IC = ic;			 
		matric = m;	
		course = c;  
		level=l;
		semester=s;
}
	
void Student::DisplayInfo()			// To display all information given (at the end of program)
{
	cout << "\n\n -----------------------------------Student Information------------------------------" << endl << endl;
	cout << " Name : " << this->name << setw(40)  << "IC: " << this->IC << endl;
	cout << " Email: " << this->email << setw(55) << "Matric Number: " << this->matric << endl;
	cout << " Course: " << this->course << setw(26) << "Level: " << this->level << endl;
	cout <<" Semester: " << this->semester << endl;
}
#endif