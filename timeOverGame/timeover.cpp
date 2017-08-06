#include <iostream>
#include <vector>
using namespace std;

void movement (int &a, int &b);
void claudiasHouse (int a);

int main (void)
{
	int playerX = 4, playerY = 20;
	int exitCode = 0;
	int playerChoice;
	string playerName;

	//Generates map
	vector < vector <int> > map (25, vector <int> (23, 0));

	for (int i=0; i < 25; i++)
	{
		for (int j=0; j < 23; j++)
		{
			map [i][j];
		}
	}

	cout << "What is your name?\n";
	cin >> playerName;
while (exitCode == 0)
{
	cout << "What would " << playerName << " like to do?\n"
		<< "1.Move\n2.Check Inventory\n3.Check Map\n4.Exit\n";
	cin >> playerChoice;
switch (playerChoice)
{
	case 1:
		movement(playerX, playerY);
	break;

	case 2:
		//inventory function goes here
	break;

	case 3:
		//map view goes here
	break;

	case 4:
		exitCode = 1;
	break;

	default:
		cout << "There is much to do!\n";
	break;
}


if (playerX == 4 && playerY == 19)
{
	claudiasHouse(map [4][19]);
}

map [4][19] = 1;

if (playerX == 4 && playerY == 21)
{
	cout << "Item added to inventory\n";
}
}
return 0;
}

void claudiasHouse (int a)
{
	int chChoice;
	if (a == 0)
	{
		cout << "\nClaudia\'s house is bright and colorful, with lots of wall decorattions and pictures \nof people you have never seen before";
	}
	else
	{
		cout << "\nYou are in Claudia\'s house.\n";
	};

	cout << "What would you like to do?\n"
		<< "1. Talk to Claudia\n2.Leave\n";
		cin >> chChoice;

		switch (chChoice)
		{
			case 1:
				//dialog for claudia
			break;

			case 2:

			break;

			default:
				cout << "There is much to do!\n";
		};
}

void movement (int &a, int &b)
{
	
	int movementChoice;
	cout << "Move?\n"
		<< "1. North \n2.South \n3.East \n4.West \n";
		cout << a << " " << b << endl;
	cin >> movementChoice;
	switch (movementChoice)
	{
		case 1:
			b+=1;
		break;

		case 2:
			b-=1;
		break;

		case 3:
			a+=1;
		break;

		case 4:
			a-=1;
		break;

		default:
			cout << "\nYou look around at the beautiful planet you know as home\n" << endl;
			movement(a, b);
		break;
	};

	if (a < 0)
	{
		cout << "The city wall prevents you from going that way\n" << endl;
		a = 0;
	};

	if (b < 0)
	{
		cout << "The city wall prevents you from going that way\n" << endl;
		b = 0;
	}

	if (a > 25)
	{
		cout << "There is a deep cavern that prevents you from going any further\n" << endl;
	};

	if (b > 23)
	{
		cout << "There is a deep cavern that prevents you from going any further\n" << endl;
	}
}