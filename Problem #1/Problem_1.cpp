#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/* 
Problem #1
This problem was recently asked by Google.

Given a list of numbers and a number k, 
return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

bool isSumPairFound(vector<int>& List, int sumK)
{
	int i, j;
	for (i = 0; i < List.size() - 1; i++)
	{
		for (j = i + 1; j < List.size(); j++)
		{
			if (List[i] == sumK - List[j])
				return true;
		}
	}
	return false;
}

int main()
{
	ifstream inputFile;
	int number, k;
	inputFile.open("Problem_1_input.txt");
	vector <int> myList;

	while (inputFile >> number)
	{
		myList.push_back(number);
	}

	cout << "Your list of numbers are loaded to our system.\n"
		<< "Please enter the value of the pair sum: ";
	cin >> k;

	if (isSumPairFound(myList, k))
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}