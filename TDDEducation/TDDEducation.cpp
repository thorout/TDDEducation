// TDDEducation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Soundex.h"
#include <iostream>

 
int main()
{
	Soundex soundex;
	std::cout << soundex.encode("A") << std::endl;
    return 0;
}

