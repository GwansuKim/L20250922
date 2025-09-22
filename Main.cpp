#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

//STL(Standard Library) Search Sort -> Algorithm
//����
//Container
//�ڷ� ����(Data Structure(�迭, index int) -> Map(�ε��� �ƹ��ų�)
//���� ũ�� �迭 -> vector
//1���� �迭 -> ��ġ ����
//2���� �迭 -> ��ǥ ����
int Map[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 1, 1, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int Player[2] = { 1, 1 };
char PlayerShape = '@';

char Sprites[10] = { ' ', '*', };

char KeyCode;
bool bIsContinue = true;

void Input()
{
	KeyCode = _getch();
}

bool Predict(int NewX, int NewY)
{
	if (Map[NewY][NewX] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Process()
{
	if (KeyCode == 'w')
	{
		if (Predict(Player[0], Player[1] - 1))
		{
			Player[1]--;
		}
	}
	else if (KeyCode == 's')
	{
		if (Predict(Player[0], Player[1] + 1))
		{
			Player[1]++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (Predict(Player[0] - 1, Player[1]))
		{
			Player[0]--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (Predict(Player[0] + 1, Player[1]))
		{
			Player[0]++;
		}
	}
	else if (KeyCode == 'q')
	{
		bIsContinue = false;
	}
}

void Render()
{
	//�ι�° ���ȣ�� x��ǥ(������)
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Player[0] == j && Player[1] == i)
			{
				cout << PlayerShape;
			}
			else
			{
				cout << Sprites[Map[i][j]];
			}
		}
		cout << endl;
	}
}

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

	char Trash = _getch();
	system("cls");

	// ���� 0���� �ʱ�ȭ
	int Number[10] = { 0, };

	for (int j = 0; j < 10; j++)
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
	Trash = _getch();
	system("cls");

	//����� �����ϱ� ����
	int Count = 0;
	cout << "���ڸ� �Է��� �ּ��� : ";
	cin >> Count;
	for (int i = 1; i <= Count; i++)
	{
		for (int j = 1; j <= Count; j++)
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

	//���ɿ켱
	for (int i = 1; i <= Count; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i; j <= Count; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	Trash = _getch();
	system("cls");

	COORD Cur;
	Cur.X = Player[0];
	Cur.Y = Player[1];
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	while (bIsContinue) {
		Input();

		//clear screen�� ����
		system("cls");

		Process();
		Render();
	}
	Trash = _getch();
	system("cls");

	char Greeting[6] = "hello";
	cout << &Greeting[0] << endl;

	string Str = "hello";
	string Str2 = "world";

	cout << Str + " " + Str2 << endl;


	return 0;
}