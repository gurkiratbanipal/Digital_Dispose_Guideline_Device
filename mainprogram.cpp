//============================================================================
// Name        : mainprogram.cpp
// Author      : kirat
// Version     :
// Copyright   : Your copyright notice
// Description : Smart Trash Guidelines
//============================================================================

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Garbage book" << endl;
	cout << "All text....." << endl<< endl<< endl;

	string response;

	 cout <<"LETS SEE HOW MUCH YOU KNOW ABOUT GARBAGE DISPOSING..."<< endl<< endl;

//QUESTION#1//

	 cout<< endl;
	 cout <<"Where is Tim Horton coffee cup is supposed to thrown? "<< endl;
	 cout <<"Black, Blue or Green Bin?"<< endl;

	 getline(cin, response);

	     if (response == "black")
	     {
	    	 cout << "YES!! You are right"<< endl;
	     }
	     else if (response == "green")
	     {
	    	 cout << "NO! Correct answer is Black Bin"<< endl;
	     }
	     else if (response == "blue")
	     {
	    	 cout << "NO! Correct answer is Black Bin"<< endl;
   	     }
	     else
	     {
	    	cout << "You was supposed to write Black, Blue or Green"<< endl;
	  		cout << "Correct answer is Black Bin"<< endl;
	     }

//QUESTION#2//

    cout<< endl;
	cout <<"Which Bin is Cardboard box belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

		     if (response == "blue")
		     {
		    	 cout << "YES!! You are right"<< endl;
		     }
		     else if (response == "green")
		     {
		    	 cout << "NO! Correct answer is Blue Bin"<< endl;
		     }
		     else if (response == "black")
		     {
		    	 cout << "NO! Correct answer is Blue Bin"<< endl;
	   	     }
		     else
		     {
		   		cout << "You was supposed to write Black, Blue or Green"<< endl;
		   		cout << "Correct answer is Blue Bin"<< endl;
		     }
//QUESTION#3//

	cout<< endl;
        cout <<"Which Bin is Glass bottles belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

 	getline(cin, response);

	     if (response == "blue")
   	     {
	   	 cout << "YES!! You are right"<< endl;
	   	 cout << "Even Broken Glass belongs to Blue Bin"<< endl;
         }
	    else if (response == "green")
	     {
	  	 cout << "NO! Correct answer is Blue Bin"<< endl;
	     }
	     else if (response == "black")
	     {
	     cout << "NO! Correct answer is Blue Bin"<< endl;
	     }
	     else
	     {
	   	 cout << "You was supposed to write Black, Blue or Green"<< endl;
	   	 cout << "Correct answer is Blue Bin"<< endl;
	     }
//QUESTION#4//

	cout<< endl;
	cout <<"Which Bin is Paper Napkin belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

 	getline(cin, response);

 	if (response == "green")
 	{
 		cout << "YES!! You are right"<< endl;
 	}
 	else if (response == "black")
 	{
 		cout << "NO! Correct answer is Green Bin"<< endl;
 	}
 	else if (response == "blue")
 	{
 		cout << "NO! Correct answer is Green Bin"<< endl;
 	}
 	else
 	{
  		cout << "You was supposed to write Black, Blue or Green"<< endl;
  		cout << "Correct answer is Green Bin"<< endl;
 	}
//QUESTION#5//
	
   cout<< endl;
   cout <<"Which Bin is Bubble Wrap belongs to? "<< endl;
   cout <<"Black, Blue or Green Bin?"<< endl;

 	getline(cin, response);

 	if (response == "black")
 	{
 		cout << "YES!! You are right"<< endl;
 	}
 	else if (response == "green")
 	{
 		cout << "NO! Correct answer is Black Bin"<< endl;
 	}
 	else if (response == "blue")
 	{
 		cout << "NO! Correct answer is Black Bin"<< endl;
 	}
  	else
  	{
  		cout << "You was supposed to write Black, Blue or Green"<< endl;
  		cout << "Correct answer is Black Bin"<< endl;
  	}
//QUESTION#6//

	cout<< endl;
 	cout <<"Which Bin is Foam(from packaging) belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "blue")
	{
		cout << "YES!! You are right"<< endl;
 	}
	else if (response == "black")
 	{
		cout << "NO! Correct answer is Blue Bin"<< endl;
 	}
  	else if (response == "green")
  	{
 		cout << "NO! Correct answer is Blue Bin"<< endl;
  	}
  	else
  	{
  		cout << "You was supposed to write Black, Blue or Green"<< endl;
  		cout << "Correct answer is Blue Bin"<< endl;
  	}

//QUESTION#7//

	cout<< endl;
 	cout <<"Which Bin is empty Water bottles belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

		if (response == "blue")
		{
			cout << "YES!! You are right"<< endl;
	 	}
		else if (response == "black")
	 	{
			cout << "NO! Correct answer is Blue Bin"<< endl;
	 	}
	  	else if (response == "green")
	  	{
	 		cout << "NO! Correct answer is Blue Bin"<< endl;
	  	}
	  	else
	  	{
	  		cout << "You was supposed to write Black, Blue or Green"<< endl;
	  		cout << "Correct answer is Blue Bin"<< endl;
	  	}
