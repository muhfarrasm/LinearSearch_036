#include<iostream>
using namespace std;


int arr[20];
int n;
int i;

void input() {
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;

		if ((n > 0) && (n <= 20)) 
			break;
		
		else
		
			cout << "\nArray should have minimum 1 and maximum 20 elements : " << endl;
		
	}

	cout << endl;
	cout << "\n------------------\n" << endl;
	cout << "Entry Array Elements\n" << endl;
	cout << "--------------------\n" << endl;

	for ( i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparison; // Number of comparison

	do				//Langkah 3
	{
		//Accept the number to be searched
		cout << "\nEnter the element you want to search : "; //Langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)								//Langkah 2 dan 4
		{
			comparison++;
			if (arr[i] == item)								// Langkah 5a found
			{
				cout << "\n" << item << "\nfound at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)											// Langkah 5b not found
			cout << "\n" << item << "\nnot found in the array ";
		cout << "\nNumber of comparasion: " << comparison << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));

}

int main()
{
	input();
	LinearSearch();
	
}