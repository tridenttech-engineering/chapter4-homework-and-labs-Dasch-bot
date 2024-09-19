//Lab4-6.cpp - displays the area of a triangle
//Created/revised by Matthew Dasch on 9-19-24

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int base = 11;
	double height = 13.0;
	double area = 0.0;

	//calculate and display area
	area = base * height / 2;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function