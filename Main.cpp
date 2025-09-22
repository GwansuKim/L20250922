#include <iostream>
#include <conio.h>
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
	while (bIsContinue) {
		Input();

		//clear screen�� ����
		system("cls");

		Process();
		Render();
	}


	return 0;
}