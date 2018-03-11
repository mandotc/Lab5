// Armando Torres-Cornejo
//CPSC 121
//<03/03/18>

#include "stdafx.h"
#include <iostream>
// function prototypes
using namespace std;
void getarrval();
void menu();
void display();
void diff();
bool search(double);

double arr[4];// global array constant 

void main()
{// defining variables
	char ans;
	double num;
	bool found;
//retrieveing values from user
	getarrval();
// creating program loop
	do {
		menu();// displaying menu of program options
		cout << "Enter a option('a'->'g') :";
		cin >> ans;
		if (ans == 'a')// displays the sum of users values 
		{
			cout << "Your sum is: ";
			cout << arr[0] + arr[1] + arr[2] + arr[3] + arr[4] << endl;
		}
		if (ans == 'b')// displays the mean of the users values
		{
			cout << "Your mean is: ";
			cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5 << endl;
		}
		if (ans == 'c')// displays the users values
		{
			display();
		}
		if (ans == 'd')// displays the differences between the values 
		{
			diff();
		}
		if (ans == 'e')// searches the array for users input 
		{
			cout << "enter number to search" << endl;
			cin >> num;
			search(num);
			found = search(num);
			if (found)
			{
				cout << num << " :found" << endl;
			}
			else
			{
				cout << num << " :not found" << endl;
			}

		}if (ans == 'f')// rewrites the array values 
		{
			getarrval();
		}
		if (ans == 'g')// terminates the program
		{
			break;
		}
		cout << "Would you like to rerun the program?('y' or 'n')" << endl;
		cin >> ans;
	} while (ans == 'y');
}//end main

//program functions 
void getarrval() //gets values from user
{
	cout << "Please enter 5 intergers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number: ";
		cin >> arr[i];
	}

}

void menu()// displays program options 
{
	cout << "*********************************************************************************" << endl;
	cout << "    a)  Sum - Calculates and displays the sum of numbers in the array" << endl;
	cout << "    b)  Mean - Calculates and displays the average of numbers in the array" << endl;
	cout << "    c)  Display - Displays the current values held in the array" << endl;
	cout << "    d)  Sequencing - Displays the difference between each adjacent array values" << endl;
	cout << "    e)  Search - Indicate whether the value is contained in the array" << endl;
	cout << "    f)  Edit - Reinput the array" << endl;
	cout << "    g)  Exit - terminate the program" << endl;
	cout << "*********************************************************************************" << endl;
}

void display()// shows values user entered 
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
}

bool search(double num)// searches array for user input
{

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == num)
		{
			return true;
		}
	}

	return false;
}

void diff()// displays the differences between the arrays 
{
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] - arr[i + 1] << " " << endl;
	}
}