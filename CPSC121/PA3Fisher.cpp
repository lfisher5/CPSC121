/* 
Name: Lauren Fisher
Professor Sprint
Class: CPSC 121
Assignment: PA3
Description: The program does many things using the input from the user and both while and for loops to produce the desired output.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {


int numValue;
int i = 1;
int factorial = 1;
int numValue2 = 0;
int factorial2 = 1;
int numStubs = 1;
int stubTotal = 0;
int stubTotalTotal = 0;
int userInt = 0;
int totalSum = 0;
int sum = 0;
int piApprox = 1;
float Pi = 0;
int numValue3 = 0;
int j = 0;
int sum2 = 0;
int numValue4 = 0;

cout << "Welcome to my PA3 really fun programming assignment! Press the enter key to start." << endl;
cin.get();

//Task 1: Part 1:

cout << "*****************Task 1: Part 1: ***************\nGreat! Now to get started, enter any positive integer and I will give you the factorial for that number using a while loop..." << endl;
cin >> numValue;
//while loop 
while (i <= numValue) {
factorial *= i;
i++;
}

cout << "The factorial of " << numValue << " is: " << factorial << endl; 

cin.ignore(); //gets rid of buffer
cout << "Now press Enter to continue." << endl;
cin.get();//waits for user input


//Task 1: Part 2: 

cout << "*****************Task 1: Part 2: ***************\nPerfect, now I will do it with a for loop... Please enter a positive integer " << endl;
cin >> numValue2;
//for loop
for (i = 1; i <= numValue2; i++) {

	factorial2 *= i;
}
cout << "Great, the factorial for " << numValue2 << " is: " << factorial2 << endl;

cin.ignore();
cout << " Now press Enter to continue." << endl;
cin.get();

//Task 2:

cout << "***************Task 2: *************\n Great now enter an integer number of paystubs you recieved last year" << endl;
cin >> numStubs;

cout << "Number of paystubs: " << numStubs << endl;

while ( numStubs > 0) {
	cout << "Please enter a pay stub amount: " << endl;
	cin >> stubTotal;
	stubTotalTotal += stubTotal; //sum of stubtotals equals total
	numStubs -=1; //progress
}

cout << "Your salary last year was: $" << stubTotalTotal << endl;

if (stubTotalTotal < 15000) {
	cout << "This is low income" << endl;
	}
else if (stubTotal > 200000) {
	cout << "This is high income" << endl;
	}
else { //15000-200000 income range
	cout << "This is medium income" << endl;
	}
cin.ignore();
cout << "Please press Enter to continue" << endl;
cin.get();

//Task 3:

cout << "***************Task 3: *************\nPlease enter a positive integer: ";
cin >> userInt;

while (userInt != 0) {
	sum += userInt % 10; //gets ones place
	userInt /= 10; //gets each digit til it equals 0
}

cout << "The sum of these digits is: " << sum << endl;

cin.ignore();
cout << "Please press Enter to continue" << endl;
cin.get();

//Task 4:

cout << "***************Task 4: *************\nPlease enter a positive integer to approximate pi to: ";
cin >> piApprox;

for (i = 0; i < piApprox; i++) {
	if (i % 2 == 0) {//when number in series is even-> positive
	Pi = Pi + (1.0 / (2.0 * i + 1.0));
	}
	else {//when number in series is odd -> negative
	Pi = Pi - (1.0 / (2.0 * i + 1.0)); //must be double numbers to return a float result for division
	}
}

Pi = Pi * 4; //everything in series has 4 in numerator

cout << "Pi is: " << Pi << endl;

cin.ignore();
cout << "Please press Enter to continue." << endl;
cin.get();

//Task 5: Part 1:

cout << "***************Task 5: Part: 1 *************\nGreat now please enter a positive integer: " << endl;
cin >> numValue3;

for (i = 1; i <= numValue3; i++) {//rows
 	for (j = 0; j < i; j++) {//columns
 	cout << i;
 	}
 	cout << endl;
 	}

cin.ignore();
cout << "Please press Enter to continue." << endl;
cin.get();

cout << "***************Task 5: Part 2: *************\nI promise this is the last time, please enter a positive integer: " << endl;
cin >> numValue4;

for (i = 1; i <= numValue4; i++) {
 	for (j = 0; j < i; j++) {
 	cout << i;
 	}
 	sum2 = j * i; //number of rows times number of columns
 	cout << "      " << sum2;
 	cout << endl;
 	}

cout << "Great, you finished! Wasn't that fun?" << endl;

return 0;
}

