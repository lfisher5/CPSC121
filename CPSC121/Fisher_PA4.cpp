/*
Name: Lauren Fisher
Class: CPSC121
Assignment: PA4
Date: 03/01/19
Description: This programs simulates a game of craps and has many fail safes to make sure the game is played correctly and makes sure the betting is a valid number. The program ends once the player chooses to quit or runs out of money.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>//for seeded rand function


using namespace std;

int main() {

char userPlay;
int bankBalance = 0;
int wager = 0;
int randRoll = 0;
int wageIncrease = 0;
int randRoll2 = 0;
bool userRepeat = true;

srand(time(0));

cout << "Hello, could I interest you in a game of Craps? Type Y for yes and N for no. "<< endl;
cin >> userPlay;

if (userPlay == 'N') {

cout << "You can't win if you don't bet!" << endl;
exit(-1);//ends program

}

else {//user wants to play

cout << "Just so you don't completely ruin yourself, I'll briefly explain the rules so you can tell where your money is going. Craps is a game of odds. You play the dice. On your first roll I will ask you for a wager value and for each subsequent roll, if you would like to add to that wager. The first roll is special, if the sum of the two dice are 7 or 11 on the first throw, you win and double your wager. If the sum is 2, 3, or 12 on the first throw (called Craps) you lose and the house takes your wager. However, and here is where it gets a little tricky, if the sum is 4, 5, 6, 8, 9, or 10 this becomes your point. Now you will keep rolling until you make your point (the number you rolled on the first roll) or until you roll a 7 (in which case you lose)." << endl;
cout << "How much would you like to bring to the table tonight (this is your bank balance for the rest of the games). Please enter an integer number less than 1000. " << endl;
cin >> bankBalance;//initial bank balance

}





while(userRepeat) {//while user answers Yes to play again, enters loop
cout << "Great! Your starting bank balance is: " << bankBalance << "! What would you like your starting wager to be? Please enter a whole number integer. Make sure it's less than your bank balance." << endl;
cin >> wager;//starting wage


while ((wager > bankBalance) || (wager <= 0)) {//wager is not valid
cout << "Please enter a wager less than your available bank balance and more than 0" << endl;
cin >> wager;
if ((wager <= bankBalance) && (wager > 0)) {//wager is valid
break;
}
}

cout << "Perfect your wager is: " << wager << ", like I always say... You can't win if you don't bet :)" << endl;

cin.ignore();
cout << "Now for the first roll... Press the enter key to roll the two dice." << endl;
cin.get();//waits for user input

randRoll = rand() % 11 + 2;//sum of dice roll

cout << "The sum of your dice are: " << randRoll << endl;

if((randRoll == 7) || (randRoll == 11)) {//if winner
bankBalance += - wager + (wager * 2);//adjusts balance

cout << "Winner winner chicken dinner! Your wager was: " << wager << " so your bank balance is now: " << bankBalance << endl;
cout << "Would you like to play again? Enter Y for Yes and N for No." << endl;
cin >> userPlay;//if Yes enters user Repeat loop


userRepeat = userPlay; 
if(userPlay == 'Y') {
userRepeat = true;
	if(bankBalance == 0) {
	cout << "Sorry, you are out of money." << endl;
	break;//out of money ends program
	}
}
else{
userRepeat = false;//quits game
}
}

else if((randRoll == 2) || (randRoll == 3) || (randRoll == 12)) {//loses on first roll
bankBalance -= wager;

cout << "Bummer... But, you can't trick the dice. Maybe they will roll in your favor the next time, would you like to play again? Your wager was: " << wager << " so your bank balance is now: " << bankBalance << ". Enter Y for play again or N for quit." << endl;
cin >> userPlay;

//You lost, but brings back to beginning
userRepeat = userPlay; 
if(userPlay == 'Y') {
userRepeat = true;
	if(bankBalance == 0) {
	cout << "Sorry, you are out of money." << endl;
	break;
	}
}
else{
userRepeat = false;
}
}

else {
do {
//add to your wager?
cout << "Your point is: " << randRoll << ".\n Your current wager is: " << wager << ". What value would you like to add to your bet? Your current bankBalance is: " << bankBalance << ". Please enter an integer." << endl;
cin >> wageIncrease;
wager += wageIncrease;
bankBalance = bankBalance - wager;
while ((wager > bankBalance) || (wager < 0)) {//if initial wager + wage Increase is more than bankBalance after money is taken out, re-prompt until it isnt
cout << "Please enter a wage increase that sums to less than your available bank balance and is at least 0." << endl;
cin >> wager;
cout << "Wager: " << wager << endl;

if ((wager <= bankBalance) && (wager >= 0)) {
break;//they did it right
}
}

cin.ignore();
cout << "Time for another roll. Press Enter to roll the two dice." << endl;
cin.get();

randRoll2 = rand() % 11 + 2;
cout << "Sum of Roll: " << randRoll2 << endl;


if(randRoll2 == 7) {//roll til you get 7
bankBalance -= (wager);

cout << "Sorry, you played the game and lost, your bank balance is now: " << bankBalance << endl;

cout << "Would you like to play again? Enter Y for Yes and N for No." << endl;
cin >> userPlay;

userRepeat = userPlay; 
if(userPlay == 'Y') {
userRepeat = true;
	if(bankBalance == 0) {
	cout << "Sorry, you are out of money." << endl;
	break;
	}
}
else{
userRepeat = false;
}

break;
}

else if(randRoll2 == randRoll) {//roll til you get your point
bankBalance += - wager + (2 * wager);
cout << "Winner! You made your point. You should really think about doing this for a living... Your bank balance is now: " << bankBalance << endl;

cout << "Would you like to play again? Enter Y for Yes and N for No." << endl;
cin >> userPlay;

userRepeat = userPlay; 
if(userPlay == 'Y') {
userRepeat = true;
	if(bankBalance == 0) {
	cout << "Sorry, you are out of money." << endl;
	break;
	}
}
else{
userRepeat = false;
}

break;

}



}while((randRoll2 != randRoll) || (randRoll2 != 7));

}


















}
cout << "Thanks for playing. Goodbye." << endl;//you quit or ran out money

return 0;
}
