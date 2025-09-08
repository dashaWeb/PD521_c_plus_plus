#include <iostream>
using namespace std;

enum colors {
	GREEN = 1, RED, YELLOW, AQUA, PURPLE
};

int main()
{
	/*
		while(){
		}
		for(){}
		do{} while()
	*/

	/*int i = 0;
	while (i < 10)
	{
		i++;
		cout << i << endl;
	}*/

	/*int res;
	do
	{
		cout << "2 + 2 = ";
		cin >> res;
	} while (res != 4);

	cout << "Congratulation" << endl;*/
	// range(start, end, step);
	// range(10)

	/*size_t i = 0;
	for (; ; )
	{
		i++;
		cout << i << "\t";
		if (i == 10)
			break;
	}
	cout << i << endl;*/
	//for (size_t i = 1; i <= 20; i+=1)
	//{
	//	if (i % 3 == 0)
	//		continue;

	//	cout << i << "\t";
	//}
	//cout << endl;


	int choice;

	do
	{
		system("cls");
		cout << R"(
		1 - Green;
		2 - Red;
		3 - Yellow;
		4 - Aqua;
		5 - Purple;
		0 - Exit;
		Enter choice :: )";
		cin >> choice;

		switch (choice)
		{
		case colors::GREEN:
			system("color 02"); break;
		case colors::RED:
			system("color 04"); break;
		case colors::YELLOW:
			system("color 06"); break;
		case colors::AQUA:
			system("color 03"); break;
		case colors::PURPLE:
			system("color 05"); break;
		}
	} while (choice != 0);
	size_t i;


}


