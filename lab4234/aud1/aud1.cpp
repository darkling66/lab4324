// aud1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main() {
	char s1[256];
	printf("Enter word: ");
	gets_s(s1);
	printf("Length: %d\n", (int)strlen(s1));
	int freq[256] = { 0 };
	int i;
	for (i = 0; i < strlen(s1); ++i)
	{
		++freq[s1[i]];
	}
	for (i = 0; i < sizeof(freq) / sizeof(int); ++i)
	{
		if (freq[i] > 0)
		{
			printf("%c - %d\n", i, freq[i]);
		}
	}
	system("pause");
	return 0;
}