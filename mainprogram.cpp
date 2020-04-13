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
#include <pthread.h>

using namespace std;

void *threadFunction1(void *value)
{
	 string line;
	  ifstream myfile ("garbagebook.txt");
	  if (myfile.is_open())
	  {
	    while ( getline (myfile,line) )
	    {
	      cout << line << '\n';
	    }
	    myfile.close();
	  }

	  else cout << "Unable to open garbage book";

}

void *threadFunction2(void *value)
{
 cout<<"M i working?";
}

int main()
{
	
    pthread_t thread;

    if(pthread_create(&thread, NULL, &threadFunction1, NULL)!=0)

    {
        	printf("Failed to create the thread\n");
        	return 1;
    }

	
    if(pthread_create(&thread, NULL, &threadFunction2, NULL)!=0)

    {
        	printf("Failed to create the thread\n");
        	return 1;
    }
	
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

//QUESTION#8//

	cout<< endl;
 	cout <<"Which Bin is Polythene Bag belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "Blue")
	{
		cout << "YES!! You are right"<< endl;
	}
	else if (response == "Black")
	{
		cout << "NO! Correct answer is Blue Bin"<< endl;
	}
	else if (response == "Green")
	{
		cout << "NO! Correct answer is Blue Bin"<< endl;
  	}
  	else
  	{
  		cout << "You was supposed to write Black, Blue or Green"<< endl;
  		cout << "Correct answer is Blue Bin"<< endl;
  	}

//QUESTION#9//

	cout<< endl;
	cout <<"Which Bin is Non working TV remote belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "Black")
	{
		cout << "YES!! You are right"<< endl;
	}
	else if (response == "Blue")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else if (response == "Green")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else
	{
		cout << "You was supposed to write Black, Blue or Green"<< endl;
		cout << "Correct answer is Black Bin"<< endl;
	}

//QUESTION#10//

	cout<< endl;
 	cout <<"Which Bin is Vegetables belongs to? "<< endl;
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
//QUESTION#11//
	
	cout<< endl;
 	cout <<"Which Bin is Rubber belongs to? "<< endl;
	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "black")
	{
		cout << "YES!! You are right"<< endl;
	}
	else if (response == "blue")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else if (response == "green")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
  	}
  	else
  	{
  		cout << "You was supposed to write Black, Blue or Green"<< endl;
  		cout << "Correct answer is Black Bin"<< endl;
  	}
//QUESTION#12//

	cout<< endl;
 	cout <<"Which Bin is used Tea Bag belongs to? "<< endl;
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
//QUESTION#13//

	cout<< endl;
 	cout <<"Which Bin is Beer/Soft drink can belongs to? "<< endl;
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
		cout << "NO! Correct answer is Blue Bin"<< endl;
	}
	
//QUESTION#13//

	cout<< endl;
 	cout <<"Where is constructon waste like cement is to be thrown? "<< endl;
 	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "blue")
	{
		cout << "NO! You have to go to waste management site and dispose it off"<< endl;
	}
	else if (response == "black")
	{
		cout << "NO! You have to go to waste management site and dispose it off"<< endl;
	}
	else if (response == "green")
	{
		cout << "NO! You have to go to waste management site and dispose it off"<< endl;
	}
	else
	{
		cout << "NO! You have to go to waste management site and dispose it off"<< endl;
	}
	
//QUESTION#14//

	cout<< endl;
 	cout <<"Which Bin is coffee/drink straw can belongs to? "<< endl;
 	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "black")
	{
		cout << "YES!! You are right"<< endl;
	}
	else if (response == "blue")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else if (response == "green")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else
	{
		cout << "You was supposed to write Black, Blue or Green"<< endl;
		cout << "NO! Correct answer is Black Bin"<< endl;
        }
	
	
//QUESTION#15//
	cout<< endl;
 	cout <<"Which Bin is Alluminium Foil can belongs to? "<< endl;
 	cout <<"Black, Blue or Green Bin?"<< endl;

	getline(cin, response);

	if (response == "black")
	{
		cout << "YES!! You are right"<< endl;
	}
	else if (response == "blue")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else if (response == "green")
	{
		cout << "NO! Correct answer is Black Bin"<< endl;
	}
	else
	{
		cout << "You was supposed to write Black, Blue or Green"<< endl;
		cout << "NO! Correct answer is Black Bin"<< endl;
	}


 	return 0;
}


