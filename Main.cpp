#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//STL(Standard Library) Search Sort -> Algorithm
//제공
//Container
//자료 구조(Data Structure(배열, index int) -> Map(인덱스 아무거나)
//가변 크기 배열 -> vector
//1차원 배열 -> 수치 저장
//2차원 배열 -> 좌표 저장
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

void Process()
{
	if (KeyCode == 'w')
	{
		if (Map[Player[1] - 1][Player[0]] != 1)
		{
			Player[1]--;
		}
	}
	else if (KeyCode == 's')
	{
		if (Map[Player[1] + 1][Player[0]] != 1)
		{
			Player[1]++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (Map[Player[1]][Player[0] - 1] != 1)
		{
			Player[0]--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (Map[Player[1]][Player[0] + 1] != 1)
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
	//두번째 대괄호가 x좌표(가로축)
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
	while (bIsContinue) {
		Input();

		//clear screen의 약자
		system("cls");

		Process();
		Render();
	}


	return 0;
}