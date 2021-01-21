/*
* Name - Erin Cleaver
* Class CIS227 21/WI
* Assignment - C ++ Review in call example
* Date 1/13/21
* 
* Purpose Review C++
*/

//includes section
#include <iostream>

//Namespace declarations
using namespace std;

//Global scope variables and constants sections
//Inputs
#include "Assignment 1.h"
int iNumberOfCredits, iGradePoints;

//Outputs
double dGPA;

//Function declartion sction 


//function difinition section
double CaluculateGPA(int iGradePoints, int iNumberOfCredits);
// bool ValidateInteger(int iToVlidate);

int main()
{
	CALCGPA calcgpa;
	char cExit;

	bool bCheckedNumberOfCredits = false;
	bool bChekedGradePoints = false;

	do {
		//Promotes the user to enter the number of credits
		cout << "Enter the Number of Credits: ";
		// Gets the input for the number of credits from the user
		cin >> iNumberOfCredits;
		//Verifies that the user entered an integer
		//bCheckedNumberOfCredits = ValidateInteger(iNumberOfCredits);
		bCheckedNumberOfCredits = calcgpa.Validate(iNumberOfCredits);
	} while (!bCheckedNumberOfCredits);

	do {
		cout << "Enter the number of Grade Points: ";
		cin >> iGradePoints;
		//Verifies that the user entered an integer
		bCheckedNumberOfCredits = calcgpa.Validate(iGradePoints);
	} while (!bCheckedNumberOfCredits);
	dGPA = calcgpa.CaluculateGPA(iGradePoints, iNumberOfCredits);

	double dMajgpa = calcgpa.CaluculateGPA(200, 500);
	

	cout << "The Grade point average is: " << dGPA << endl;
	cout << "The Grade point average is: " << dMajgpa << endl;

	cin >> cExit;
	return 0;
}

// Calculates the GPA formual
// The forumal is Grade Points devided by Number of Credits


