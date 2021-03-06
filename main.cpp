/**

Description: CIS201 Midterm Fall 2018
Filename: main.cpp
Author: Luke Schron
Email: schronl@student.vvc.edu
Date: 10/18/2018

*/
#include <iostream>
#include <string>

using namespace std;

// Declare the functions
string get_string(string s);
int char_count(string s, char c);

int main()
{
	// Prompt user for a string and create a char variable with an initial value of "a"
	string input =  get_string("Please enter a string to eval: ");
	char c = 'a';

	// Ask user to enter a character they want to search in the string
	cout << "Please enter a character you would like to search for in the string: " << endl;
	cin >> c;

	// Output
	cout << "The number of times \'" << c << "\' apears in the string is: " << char_count(input, c) << endl;
	
	return 0;
}

// The standard "get" input function. I could extend this to potentially return
// both our eval string and our character to search for, but for simplisity sake
// I decided to just use "cin" to get the char.
string get_string(string s) 
{
	string input;
	cout << s;
	cin >> input;
	return input;
}

// Pretty much just recycled code from the previous 2 assignments. The only real tweak
// that was made to it was to have 2 inputs and use those for the logic.
// Another potential expansion to this would be to check for case of the character.
int char_count(string s, char c)
{
	int times = 0;

	for ( int i = 0; i < s.length(); i++ )
	{
		if ( s[i] == c )
			times++;
	}

	return times;
}
