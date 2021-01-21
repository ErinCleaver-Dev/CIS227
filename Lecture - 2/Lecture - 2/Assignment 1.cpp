#include "Assignment 1.h"
#include <iostream>


double CALCGPA::CaluculateGPA(int iGradePoints, int iNumberOfCredits)
{
	return (iGradePoints) / iNumberOfCredits;
}

bool CALCGPA::Validate(int iToValidate)
{
	bool bValid = false;

	//First checks if it is  digit and then see if the user put in Zero.
	if (isdigit(iToValidate)) {
		if (iToValidate != 0) {
			bValid = true;
		}
	}
	// Returns a 0 value if the value is not a digit.  
	return bValid;
}
