#include "fy_utility.h"

int fy_strlen(const char* str)
{
	int len;
	for (len = 0; str[len] != '\0'; ++len);

	return len;
}

//Two pointer solution
int is_palindrome(const char* word)
{
	int begin = 0, end = fy_strlen(word) - 1;

	while (begin <= end)
	{
		if (!isalnum(word[begin]))
			++begin;
		else if (!isalnum(word[end]))
			--end;
		else if (toupper(word[begin++]) != toupper(word[end--]))
			return 0;
	}
	return 1;
}

//mutating string undefined behaviour
void reverse_string(char* str)
{
	const int size = fy_strlen(str) - 1;
	for (int i = 0; i < size / 2; i++)
	{
		swap(&str[i], &str[size - 1 - i]);
	}
}


void safe_reverse_string(const char* str, char reversed[])
{
	const int len = fy_strlen(str);
	
	for (int i = 0; i < len; ++i)
		reversed[i] = str[len - 1 - i];

	reversed[len] = '\0';
}

