#include <iostream>

using namespace std;

int main()
{
	int PlayerX = 1;
	int PlayerY = 1;
	int GoalX = 8;
	int GoalY = 8;
	char Key = 0;

	int Map[10][10] =
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};


	for (;;)
	{
		cin >> Key;

		if (Key == 'w')
		{
			PlayerY--;
		}
		if (Key == 's')
		{
			PlayerY++;
		}
		if (Key == 'a')
		{
			PlayerX--;
		}
		if (Key == 'd')
		{
			PlayerX++;
		}

		system("cls");

		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (GoalX == X && GoalY == Y)
				{
					cout << "G";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "*";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}