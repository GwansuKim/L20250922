#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

//entry
int main()
{
	int Sum = 0;
	for (int i = 1; i < 101; i++)
	{
		Sum += i;
	}

	cout << "Summary : " << Sum << endl << endl;

	Sum = 0;
	for (int i = 3; i < 101; i += 3)
	{
		Sum += i;
	}

	cout << "Mul of 3 : " << Sum;

	_getch();
	system("cls");

	// 전부 0으로 초기화
	int Number[10] = { 0, };

	for(int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			Number[i] = i + 1;
		}
	}

	//*****
	//****
	//***
	//**
	//*
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	_getch();
	system("cls");

	//*****
	// ****
	//  ***
	//   **
	//    *
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}