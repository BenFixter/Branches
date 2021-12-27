#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void getValueInput()
{
	const string TO_MATCH = "Yes";
	
	string input;
	int retries = 0;

	cout << "Please type '" << TO_MATCH << "' here (case sensitive): ";
	do 
	{
		cin >> input;
		if (input != TO_MATCH)
		{
			cout << "Nope, try again: ";
			++retries;
		}
	} while (input != TO_MATCH);

	if (retries == 0)
	{
		cout << "First time";
	} 
	else if (retries == 1)
	{
		cout << "Second time, works a charm";
	}
	else if (retries < 3)
	{
		cout << "Not bad, but that only took " << retries << " retries";
	}
	else
	{
		cout << "Seriously..." << (retries + 1) << " to,es tp wrote" << TO_MATCH << " what are you thinking";
	}
	cout << "\n\n";
}

void sumOfNumbers()
{
	int sum(0);

	for (int i = 0; i < 10; i++)
	{
		int input;
		cout << "Please provide a number" << (i+1) << " to sum:";
		cin >> input;
		sum += input;
	}

	cout << "The sum of those numbers is " << sum << " with an average of " << (sum / 10) << "...tada...\n\n";
}

void randomNumber()
{
	srand((int) time(NULL));

	int value = rand() % 5;

	int number;

	cout << "Give me a number:";
	cin >> number;

	if (number == value) {
		cout << "Nice guess. That was the random number i generated";
	}
	else {
		cout << "Nope, that wasn't the one that i ranodmly generated";
	}

	cout << "\n\n";
}
int main()
{
	//randomNumber();
	//getValueInput();
	//sumOfNumbers();
	system("Pause");
	return 0;
}
