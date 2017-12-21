// AoC-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int arr[10000];
	string input; //input here
	vector<int> seq;
	for (int i = 0; i < input.length(); i++)
	{
		seq.push_back((int)input[i] - '0');
		arr[i] = (int)input[i] - '0';
	}
	int * curr;
	int * next;
	next++;
	int counter = seq.size();
	int sum;
	bool finished = false;
	while (counter--)
	{
		if (*curr == *next)
		{
			sum += *curr;
		}
		else if (*curr != *next && finished)
		{
			break;
		}
		curr++;
		next++;
		if (counter == 0)
		{
			curr = arr;
			finished = true;
		}
		if (counter == 1)
		{
			next = arr;
		}
	}
	cout << sum;
    return 0;
}

