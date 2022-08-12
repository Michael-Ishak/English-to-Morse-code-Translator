#include <iostream>
#include <string>
using namespace std;

string Morse(char);

const int num_chars = 40;
char ASCII_Eng[num_chars] = { ' ', ',', '.', '?', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K','L', 'M',
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

string morse[num_chars] = { " ", "--..--", ".-.-.-", "..--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-",
"-...", "-.-", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
"-.--", "--.." };

int main()
{
	string str; //User input

	cout << "Convert text into Morse code." << endl;
	cout << "->" << endl;
	getline(cin, str);

	//Translate each character:
	int i = 0;
	while (i < str.size())
	{
		cout << Morse(toupper(str[i])) << endl;
		i++;
	}
	return 0;
}
//Define Morse function - to return a string of morse code for the character inputted:

string Morse(char c)
{
	int i = 0;
	while (i < num_chars && c != ASCII_Eng[i]) { i++; } string Value;
	//Hold the morse code
	if (i >= num_chars)
		Value = "UNDEFINED"; //meaning it could not find c
	else
		Value = morse[i]; //grabbing the morse code
	return Value;
}