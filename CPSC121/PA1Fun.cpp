



#include <iostream>


using namespace std;
int main () {

string userName = ""; 
string userFrom = "";
string userDreamCar = "";
int userYear = 0;
int currentYear = 2019;
int userAge = 0;
double roboAge = 16.0;
double roboRatio = 0.0;
float carPrice;
int paymentYears = 0;
int endPaymentAge = 0;
double percentInterestRate = 0.0;


cout << "Hello, I am WALL-E. I would love to get to know you a little bit better :). What is your frist and last name?" << endl;
getline (cin, userName);

cout << " Wow! " << userName << " is a beautfiul name! I'd love to learn more about you. If you don't mind my asking, what state are you from?" << endl;
cin >> userFrom;

cout << userFrom << "?!?! That is one of my favorite places to visit, I myself am from good ol' Nebraska born and raised. I know it may be impolite to ask, but what year were you born?" << endl;
cin >> userYear;

userAge = currentYear - userYear;
roboRatio = roboAge / userAge;


cout << "Wow it feels like just yesterday I was that young, I myself am 16, making me " << roboRatio << " times older than you! I am really nervous being 16 because that means I will be getting my Driver's License soon. My parents said I can pick any car I want but I am having trouble deciding. What is your dream car?" << endl;
getline (cin, userDreamCar);
getline (cin, userDreamCar);

cout << "No way, that car is tightttt. how much does the " << userDreamCar << " cost?" << endl;
cin >> carPrice;

cout << "Golly " << carPrice << " is a steep price to pay. As scary as it may sound, your best option might be to take out a loan for it though and pay it off slowly. How many years would you like to pay it off for?" << endl;
cin >> paymentYears;

endPaymentAge = paymentYears + userAge;

cout << "Man, you'll be done paying that off by the time you are " << endPaymentAge << " but on the bright side, you'll have your dream car to drive around for at least the next decade or so. It wouldn't be so bad depending on the interest rate. I'm really good with math so if you can find the percent interest rate on that car I can tell you what the cost to you would be..." << endl;
cin >> percentInterestRate;




















return 0;
}	

