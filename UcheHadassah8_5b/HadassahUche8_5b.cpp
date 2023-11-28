/*Repeat exercise 3b from exercise sheet 6, using pointers. 
3b) Re-write the above exercise with a function: Write a function called IsPalindrome 
which takes as a parameter a string and returns true (i.e. 1) if the string is a 
palindrome. Write a main program to test your function with a user-defined string. */
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char  word[MAX];
	char* p;
	int i;
	cout << "Enter a word:";
	cin >> word;
	p = word;
	for (i = 0; word[i] != '\0'; i++);
	i--;
	while (p < (word + i))//(word + i) basically means null character since it adds i to the position of the first element
	{
		if (*p != word[i])
		{
			cout << "It is not a palindrome.";
			break;
		}
		p++;
		i--;
	}
	if (p >= (word + i))//in case of even numbers too
		cout << "It is a palindrome.";
}