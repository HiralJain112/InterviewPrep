/*
Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing 
and one number occurs twice in the array. Find these two numbers.

Examples: 

 Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 
2 is missing and 3 occurs twice 

Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: Missing = 5, Repeating = 1
*/

// C++ program to find the repeating
// and missing elements using Maps
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int arr[] = { 4, 3, 6, 2, 1, 1 };
	int n = 6;
	
	unordered_map<int, bool> numberMap;
	
	for(int i : arr)
	{
		if (numberMap.find(i) ==
			numberMap.end())
		{
			numberMap[i] = true;
		}
		else
		{
			cout << "Repeating = " << i;
		}
	}
	cout << endl;
	
	for(int i = 1; i <= n; i++)
	{
		if (numberMap.find(i) ==
			numberMap.end())
		{
			cout << "Missing = " << i;
		}
	}
	return 0;
}
// refer to this link for more approaches : https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
