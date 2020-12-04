/*
Name : Lauren Fisher
Class : CPSC 121, Spring 2019
Assignment : PA2
Date : 02/11/19
Description : This program is a quiz about Hannah Montana that can compute how big of a fan you are based on how many correct answers you get throughout the quiz
*/


#include <iostream>

using namespace std;

int main () {
string userBegin = "";
string userAnswer1 = "";
string userAnswer2 = "";
int numPoints = 0;
bool userAnswer3;
int userAnswer4 = 0;
string userAnswer5 = "";
string userAnswer6 = "";
int userAnswer7 = 0;
bool userAnswer8;
string userAnswer9 = "";
string userAnswer10 = "";



cout << "Welcome to my Are You A Fan Quiz! In a world full of cheallenges covering up her secret identity, Hannah Montana truly lived the best of both worlds. Do you think you're a true fan? We'll find out. Enter Start to Begin." << endl;
cin >> userBegin; //Starts Quiz

if (userBegin == "Start") {
cout << "\n\nQuestion #1:\n We'll start out with an easy one... Who is Hannah's best friend? " << endl;
}

cin >> userAnswer1;

if ((userAnswer1 == "Lola") || (userAnswer1 == "lola")) {
cout << "\n\nCorrect you've earned yourself a point. But don't get too happy, if you didn't get that one correct I would have recommended you end the quiz." << endl;
numPoints += 1; //correct answer adds a point
}
	
else {
cout << "\n\nSorry, that is incorrect, maybe try watching any episode of the entire show again so you get it right next time." << endl;
	}

cout << "\nQuestion #2:\n Miley starts dating Jake when she is only a teenager and he confides in her his true name...\n a) Lauren\n b) Leslie\n c) Kelly\n d) Alex\n Please enter a letter a - d" << endl;

cin >> userAnswer2;

if (userAnswer2 == "b") {
numPoints += 1; // correct answer adds a point
cout << "\nCorrect! I guess you do know a little about Hannah Montana, you have earned yourself " << numPoints << " points so far!" << endl;
}

else {
cout << "\nSorry, no.... the correct answer was b : Leslie which Miley then begins to hysterically laugh at... awkward..." << endl;
} 

cout << "\n\nOk now for a true/false question.\n Question #3: In the final episode we learn that the whole concept for Hannah Monatna was really a little girl dreaming in her bedroom... Enter 1 for True or 0 for False." << endl;

cin >> userAnswer3;
//In C++ 1 for True and 0 for False is a default, so do not need to declare here

if (!userAnswer3) {
cout << "\nCorrect! While this was a scene that was shot, 	they never ended up using this in the final episode. "<< endl;
numPoints += 1; //False is correct
	}

else {
cout << "\nSorry! This may sound familiar because this scene was shot, but it was never included in the final episode."<< endl; 
//True is incorrect
	}
	
cout << "\n\nYou're up to " << numPoints << " points so far! Now let's kick things up a notch... \n Question #4: What year did the TV show Hannah Montana air? Please enter an integer." << endl;

cin >> userAnswer4;

if (userAnswer4 < 2006) {
cout << "\nSorry! Just a little too early, unfortunately we were not introduced to Hannah until March 2006" << endl;
} // Answer is less than actual  

if (userAnswer4 > 2006) {
cout << "\nNope! Actually earlier than that, feels like just yesterday though. It actually aired in March 2006" << endl;
} // Answer is more than actual

else if ( userAnswer4 == 2006) {
numPoints += 1; //correct answer adds a point
cout << "\nYou nailed it! March 2006 to be exact. You're up to " << numPoints << " points now!" << endl; 
}

cout << "\n\nWell, you're not doing terrible. You've racked up " << numPoints << " points so far. But don't worry we're only halfway through. Onto Question #5: Miley's brother Jackson in the show is playing a 16 year old in the show when it began. How old was he actually? \n a) 14 \n b) 21 \n c) 12 \n d) 29 \n Please enter a letter a - d" << endl;

cin >> userAnswer5;

if (userAnswer5 == "d") {
cout << "\nCorrect! While it is kind of creepy him playing someone that much younger I guess he played it off well since many people wouldn't know unless being told." << endl;
numPoints += 1; //correct answer adds points
}
else {
cout << "\nSorry, he was actually much older. His actor Jason Earles was actually 29 when he began the show..." << endl;
}

cout << "\n\nQuestion #6: Ok you've gotten this far, but only a true fan will know some of her most iconic song lyrics. Fill in the lyrics to thing song... ""Everybody makes mistakes. Everybody has those ""****"". Everybody knows what, what I'm talking bout, everybody gets that way."<< endl; //can be capital or lowercase answer

cin >> userAnswer6;

if ((userAnswer6 == "days") || (userAnswer6 == "Days")) {
cout << "\nCorrect! Wow, you really know your stuff. That song truly is an anthem even today." << endl;
numPoints += 1; //correct answer adds a point
}

else {
cout << "\nThat is incorrect, but no worries, she does have so many amazing songs, its hard to know the lyrics to all of them." << endl; 
}

cout << "\n\nOnto Question #7: How many seasons of Hannah Montana are there actually? Please enter an integer " << endl;
cin >> userAnswer7;

if (userAnswer7 < 4) {
cout << "\nActually there were 4! But you were close... Don't worry you still have " << numPoints << " points!" << endl; //less than actual answer
}

if (userAnswer7 > 4) {
cout << "\nIt does feel like there were more but there were actually only 4. Crazy right?! Don't worry, you still have " << numPoints << " points!" << endl; //more than actual answer
}

else if (userAnswer7 == 4) {
cout << "\nCorrect! You really know your stuff. I wonder how many hours that took......" << endl;// correct answer adds a point
numPoints += 1;
}

cout << "\n\n Only three more questions until we found out your true Hannah Montana fan status... you've racked up " << numPoints << " points so far.\n Question #8: Another true/false question. Miley's Mom wasn't around during the show because she died in a plane crash. Enter 1 for true or 0 for false." << endl; //1=True and 0=False is a default, do not need to declare

cin >> userAnswer8;

if (userAnswer8) {
cout << "\nTrue! Many people don't know this is why she is not in the show and assume her and Robby Ray got a divorce." << endl;
numPoints += 1; //correct answer adds a point
}

else {
cout << "\n It's actaully true! While they don't mention her much in the show this is why she does not have a character in the show." << endl;
}

cout << "\n\n Onto Question #9: Almost there! What type of condition does Hannah's annoying friend Tracy have as she so eloquently puts it? Please enter one word" << endl;

cin >> userAnswer9;

if ((userAnswer9 == "nasal") || (userAnswer9 == "Nasal")) {
cout << "\nCorrect! Tracy being one of Hannah's only celebrity friends has a nasal condition that causes her to talk in a very memorable way." << endl; // can be capital or lowercase answer
numPoints += 1;
}

else {
cout << "\nWrong, it is actually a nasal condition which she suffers from and it is quite obvious once you hear her talk." << endl;
}

cout << "\n\nLast Question! Question #10: In the final episode we see Miley and Lily go off to college together. What university do they attend? \n a) Stanford \n b) Harvard \n c) Gonzaga \n d) USC \n Please enter a letter a - d" << endl;

cin >> userAnswer10;

if (userAnswer10 == "a") {
cout << "\nCorrect! Hard to imagine she could have good enough grades to get in there after being Hannah Montana all those years, but I guess it is a TV show..." << endl;
numPoints += 1; //correct answer adds a point
}

else {
cout << "\nIncorrect, somehow Miley and Lily each got in to Stanford University and end up being roommates there in the final episode." << endl;
}


cout << "\nCongratulations you have finished the quiz. You answered " << numPoints << " questions out of 10 correctly. Based off your results: " << endl;

if ((numPoints < 6) && (numPoints > 2)) {
cout << "Gee you really don't know much about Hannah Montana, while it's not on Netflix yet... there are rumors it will be sometime in 2019. I would consider rewatching some of them and taking the quiz again." << endl; //Below average fan
}

else if ((numPoints >= 6) && (numPoints <=9)) {
cout << "Wow, you know quite a bit. You must've watched almost every episode of this show. Props to you." << endl;//average fan
}
else if (numPoints <= 2) {
cout << "You really need to set your priorities straight. Whatever you're currently watching is NOT as important as Hannah Montana. Get to work." << endl;//not even a fan
}

else {
cout << "Okay I'm a little scared... You know all of that about Hannah Montana? Have you even watched any other TV shows? There's some really good ones out there that maybe you should check out..." << endl;//crazy fan
}


return 0;
}

