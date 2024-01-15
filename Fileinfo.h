#ifndef FILEINFO_H
#define FILEINFO_H
#include <iostream>
#include <fstream>
using namespace std;

class Fileinfo
{
	public:
		void DisplayDegreeCourse();
		void DisplayMasterCourse();
		void DisplayPHDCourse();
};

void Fileinfo::DisplayDegreeCourse()
{
	fstream file;										// file is the object i guess not sure what this term call
	file.open("Degree.txt",ios::in);                    // To open Degree text file that has course name and the fee for the course per semester
	string CourseDegree[999];  							// Array that will store the name course that written in the text file degree.txt
	double DegreeCost[999];								// Array that will store the fee per semester that written after the course name							// 

	
    if(file.fail())             // checks to see if file opended 
    { 
      cout << "error" << endl;                 // no point continuing if the file didn't open...
    } 
     
    int i =0;     
    
while(file>>CourseDegree[i]>>DegreeCost[i])   // This while loop will read the file and store every each of information into the array
{											  // until the end of the file

	i++;									 
}

	for(int y=0;y<i;y++)					   // this for loop is to display all the course in degree text file for the user to copy
	{
		cout << CourseDegree[y] << endl;
	}
	
	file.close();		                       // to close file degree.txt
	
}

void Fileinfo::DisplayMasterCourse()
{
	fstream xfile;										// file is the object i guess not sure what this term call
	xfile.open("Master.txt",ios::in);					// To open Master text file that has course name and the fee for the course per semester
	string CourseMaster[999];                           // Array that will store the name course that written in the text file Master.txt
	double MasterCost[999];                             // Array that will store the fee per semester that written after the course name

	
   if(xfile.fail())        // checks to see if file opended 
    { 
      cout << "error" << endl; 
    } 
    
   int i =0;
   
while(xfile>>CourseMaster[i]>>MasterCost[i])           // This while loop will read the file and store every each of information into the array
{													   // until the end of the file

	i++;
}


	for(int y=0;y<i;y++)				// this for loop is to display all the list course from master.txt for user to copy
	{
		cout << CourseMaster[y] << endl;
	}
	
	xfile.close();                      // to close file Master.txt
}

void Fileinfo::DisplayPHDCourse()
{
		fstream myfile;								// file is the object i guess not sure what this term call
	myfile.open("PHD.txt",ios::in);             // To open PHD text file that has course name and the fee for the course per semester
	string CoursePHD[999];                      // Array that will store the name course that written in the text file PHD.txt
	double PHDCost[999];                        // Array that will store the fee per semester that written after the course name
	
   if(myfile.fail())        // checks to see if file opended 
    { 
      cout << "error" << endl; 
     
    } 
    
      int i =0;
      
while(myfile>>CoursePHD[i]>>PHDCost[i])         // This while loop will read the file and store every each of information into the array
{                                               // until the end of the file

	i++;
}
       
	
	for(int x=0;x<i;x++)			// this for loop is to display all the course list in PHD.txt for the user to copy
	{
		cout << CoursePHD[x] << endl;	
	}                             
	
	myfile.close();                         // to close file PHD.txt
}
#endif