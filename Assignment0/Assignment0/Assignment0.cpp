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
int iNumberOfCredits, iGradePoints;

//Outputs
double dGPA;

//Function declartion sction 


//function difinition section
double CaluculateGPA(int iGradePoints, int iNumberOfCredits);
bool ValidateInteger(int iToVlidate);

int main()
{
	char cExit;

	bool bCheckedNumberOfCredits = false;
	bool bChekedGradePoints = false;

	do {
		//Promotes the user to enter the number of credits
		cout << "Enter the Number of Credits: ";
		// Gets the input for the number of credits from the user
		cin >> iNumberOfCredits;
		//Verifies that the user entered an integer
		bCheckedNumberOfCredits = ValidateInteger(iNumberOfCredits);
	} while (!bCheckedNumberOfCredits);

	do {
		cout << "Enter the number of Grade Points: ";
		cin >> iGradePoints;
		//Verifies that the user entered an integer
		bChekedGradePoints = ValidateInteger(bChekedGradePoints);
	} while (bChekedGradePoints);
	dGPA = CaluculateGPA(iGradePoints, iNumberOfCredits);

	

	cout << "The Grade point average is: " << dGPA << endl;
	cin >> cExit;
	return 0;
}

// Calculates the GPA formual
// The forumal is Grade Points devided by Number of Credits

double CaluculateGPA(int iGradePoints, int iNumberOfCredits) {

	return iGradePoints / iNumberOfCredits;
}

bool ValidateInteger(int iToVlidate) {
	bool bValid = false;

	//First checks if it is  digit and then see if the user put in Zero.
	if (isdigit(iToVlidate)) {
		if (iToVlidate != 0) {
			bValid = true;
		}
	}
	// Returns a 0 value if the value is not a digit.  
	return bValid;
}