/*Name:Uche Hadassah
This program makes use of pointers to read a word and check if it's a palindrome*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
bool IsPalindrome(char[]);//Function prototype
int main()
{
	char  word[MAX];
	cout << "Enter a word:";
	cin >> word;
	if (IsPalindrome(word) == true)
		cout << "It is a palindrome.";
	else
		cout << "It is not a palindrome";
	return 0;
}

bool IsPalindrome(char Word[])
{
	char* ptr;
	ptr = Word;
	int i;
	for (i = 0; Word[i] != '\0'; i++);
	i--;
	while (ptr < (Word + i))//(word + i) basically means null character since it adds i to the position of the first element
	{
		if (*ptr != Word[i])
		{
			return false;
			break;
		}
		ptr++;
		i--;
	}
	if (ptr >= (Word + i))//in case of even numbers too
		return true;
	return false;
}
