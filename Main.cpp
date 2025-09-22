#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i < 101; i++)
	{
		sum += i;
	}

	cout << "Summary : " << sum;

	sum = 0;
	for (int i = 3; i < 101; i += 3)
	{
		sum += i;
	}

	cout << "Mul of 3 : " << sum;

	return 0;
}