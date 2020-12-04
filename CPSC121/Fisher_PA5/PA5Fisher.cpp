/*
Name: Lauren Fisher
Class: CPSC121
Assignment: PA5
Date: 03/017/19
Description: The program takes an inputfile, analyzes it, displays to the console, and then writes statistics about it to an output file.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

ifstream inputFile;
ofstream outputFile;
string origin;
int i = 0;
int distanceMeters = 0;
string wayPoint;
int days = 0;
string grossString;
string destination;
float distanceMiles = 0.00;
int daysSum = 0;
int distanceMilesSum = 0;
int largestDistance = 0;
string wayPoint1;
string wayPoint2;
int largestDistanceMiles = 0;
string wayPoint3;
int largestDays = 0;
double daysAverage = 0;
double milesAverage = 0;

cout << "Welcome to my road trip analyzer... Cause who has the money to fly places when you're a college student in 2019, am I right? "<< endl;
cout << "Reading input from gainesville_roadtrip.txt" << endl;

inputFile.open("gainesville_roadtrip.txt");
if(inputFile.is_open()) {
cout << "Succesful open" << endl;//opened
}
else{
cout << "Failed to open" << endl;//did not open
exit(-1);
}

//tip there is only one origin at start of file, read it in before loop

//currently each iteration reads one line, change it so each iteration reads one waypoint triple (string, days, int)


do {
getline (inputFile, origin);
	if (inputFile.good()) {
		cout << "Origin: " << origin << endl;
		i++;
}}while(i < 1);


while (!inputFile.eof()) {
cout << "Processing..." << endl;

inputFile >> distanceMeters;
getline(inputFile, grossString);
getline(inputFile, wayPoint);
inputFile >> days;

distanceMiles = distanceMeters * 0.00062137;
if(inputFile.good()){
cout << "The distance to Waypoint " << wayPoint<< " is " << distanceMiles << " miles and you will spend " << days << " days there." << endl;
}



}
getline(inputFile, destination); 
cout << "Destination: " << destination << endl;

cout << "Writing stats to gainesville_roadtrip_stats.txt" << endl;

inputFile.close();//need to close and reopen to go back to top
inputFile.open("gainesville_roadtrip.txt");

outputFile.open("gainesville_roadtrip_stats.txt");//opens output file to write to


do {
getline (inputFile, wayPoint);
	if (inputFile.good()) {
		outputFile << "Origin: " << wayPoint << endl;
		i++;//inputs origin
		
}}while(i < 1);


i = 1;
while (!inputFile.eof()) {


inputFile >> distanceMeters;
if(distanceMeters > largestDistance){
largestDistance = distanceMeters;//finds longest distance
	if(distanceMeters == largestDistance) {
	wayPoint1 = wayPoint;//beginning of longest destination
}}
getline(inputFile, grossString);
getline(inputFile, wayPoint);
	if(distanceMeters == largestDistance) {
	wayPoint2 = wayPoint;
	}//destination of longest destination
inputFile >> days;
	if(days > largestDays) {
	largestDays = days;//finds largest number of days
	wayPoint3 = wayPoint;//assigns waypoint to largest number of days
	} 


i++;//counts number of waypoints
distanceMiles = 0.00062137 * distanceMeters;//converts meters to miles
daysSum += days;//adds days
distanceMilesSum += distanceMiles;//adds miles


if(inputFile.good()){
outputFile << "Waypoint: " << wayPoint << "   Distance: " << distanceMiles << " miles   Days there: " << days << endl;
}



getline(inputFile, grossString);
getline(inputFile, grossString);

}
largestDistance =  0.00062137 * largestDistance;
daysAverage = static_cast<double>(daysSum) / i;//need to static cast to get double returned
milesAverage = static_cast<double>(distanceMilesSum) / i;

//answers a-h in rubric
outputFile << "Total waypoints on trip: " << i << "." << endl;

outputFile << "Total miles traveled on roadtrip: " << distanceMilesSum << " miles." << endl;

outputFile << "Total days spent on roadtrip: " << daysSum << endl;

outputFile << "The greatest distance between waypoints is " << largestDistance << " miles between " << wayPoint1 << " and " << wayPoint2 << endl; 

outputFile << "The waypoint with the longest number of days spent is " << wayPoint3 << " and you will spend " << largestDays << " days there." << endl;

outputFile << "The average number of days spent at each waypoint is: " << daysAverage << endl;

outputFile << "The average number of miles between waypoints is: " << milesAverage << endl; 

cout << "Closing files. Thanks for your input! :)" << endl;

inputFile.close();
outputFile.close();





return 0;
}
