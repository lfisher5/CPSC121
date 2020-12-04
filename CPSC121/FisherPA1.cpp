/* 
Programmed by: Lauren Fisher
Class: CPSC 121 Spring 2019
Date: 01/30/19
Assignment: PA1
Description: this is a chatbot named Wall-E who will have a brief converstaion while learning a few things about you and then based on the information you give computes your montly payments for a car and total cost to you.
Note: Can not get the dollar amount for the monthly payment and total cost to read off only 2 spaces after the decimal point
*/




#include <iostream>
#include <cmath>


using namespace std;
int main () {

string userName = ""; 
string userFrom = "";
string userDreamCar = "";
string userDecision = "";
int userYear = 0;
int currentYear = 2019;
int userAge = 0;
double roboAge = 16.0;
double roboRatio = 0.0;
float carPrice;
int paymentYears = 0;
int endPaymentAge = 0;
double percentInterestRate = 0.0;
double monthlyIntRate = 0.0;
double monthlyPayment = 0.0;
double totalCost;


cout << "Hello, I am WALL-E. I would love to get to know you a little bit better :). What is your frist and last name?" << endl;
getline (cin , userName); //assures that the users full name appears

cout << " Wow! " << userName << " is a beautfiul name! I'd love to learn more about you. If you don't mind my asking, what state are you from?" << endl;
cin >> userFrom;

cout << userFrom << "?!?! That is one of my favorite places to visit, I myself am from good ol' Nebraska born and raised. I know it may be impolite to ask, but what year were you born?" << endl;
cin >> userYear;

userAge = currentYear - userYear; 
roboRatio = roboAge / userAge; //computes WALL-E's age to users


cout << "Wow it feels like just yesterday I was that young, I myself am 16, making me " << roboRatio << " times older than you! I am really nervous being 16 because that means I will be getting my Driver's License soon. My parents said I can pick any car I want but I am having trouble deciding. What is your dream car?" << endl;
getline (cin , userDreamCar);
getline (cin , userDreamCar);

cout << "No way, that car is tightttt. how much does the " << userDreamCar << " cost?" << endl;
cin >> carPrice;

cout << "Golly " << carPrice << " is a steep price to pay. As scary as it may sound, your best option might be to take out a loan for it though and pay it off slowly. How many years would you like to pay it off for?" << endl;
cin >> paymentYears;

endPaymentAge = paymentYears + userAge;

cout << "Man, you'll be done paying that off by the time you are " << endPaymentAge << " but on the bright side, you'll have your dream car to drive around for at least the next decade or so. It wouldn't be so bad depending on the interest rate. I'm really good with math so if you can find the annual percent interest rate on that car I can tell you what the cost to you would be..." << endl;
cin >> percentInterestRate;

monthlyIntRate = (percentInterestRate / (100*12)); //used to plug in to further equations for montly payments and total costs

monthlyPayment = carPrice * monthlyIntRate / (1 - pow((1 + monthlyIntRate), - ((12 * paymentYears)))); 

totalCost = monthlyPayment * 12 * paymentYears; //cost includes interest paid over the years

cout << "What a steal! For only " << monthlyPayment << " per month you could have that baby paid off in " << paymentYears << " years. Total Cost to you would end up being about " << totalCost << " dollars not including inflation. Would you be willing to buy this car in the future?"<< endl;
cin >> userDecision;

cout << userDecision << "? By the way did I mention I sell " << userDreamCar << "'s? Because of your answer provided I have decided to leave my contact info below for you to reach out to me. Have a good one " << userName << ".       WALL-E... 1-800-WAL-LEGO... scamcarservices@fakeemail.com     ";





return 0;
}	

