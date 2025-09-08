#include <iostream>
using namespace std;


int main()
{
	/*int number;
	cout << "Enter number :: ";
	cin >> number;*/

	/*for (size_t j = 2; j < 10; j++)
	{
		for (size_t i = 1; i < 10; i++)
		{
			cout << j << " x " << i << " = " << j * i << endl;
		}
		cout << endl;
	}*/
	/*for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = 2; j < 6; j++)
		{
			cout << j << " x " << i << " = " << j * i << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = 6; j < 10; j++)
		{
			cout << j << " x " << i << " = " << j * i << "\t";
		}
		cout << endl;
	}*/

	/*Вантажний літак повинен пролетіти з вантажем з пункту А в пункт С через пункт В.Ємність бака для палива у літака — 300 літрів.Споживання палива на 1 км залежно від ваги вантажу в літака таке :
	до 500 кг — 1 літр / км;
	до 1000 кг — 4 літри / км;
	до 1500 кг — 7 літрів / км;
	до 2000 кг — 9 літрів / км;
	понад 2000 кг літак не піднімає.
		Користувач вводить відстань між пунктами А і В, відстань між пунктами В і С, а також вагу вантажу.Програма має розрахувати яка мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С.У разі неможливості подолати будь - яку з відстаней програма повинна вивести повідомлення про неможливість польоту за введеним маршрутом.*/

	int AB = 100;
	int BC = 150;
	int weight = 2000;

	int volumeAB = 0;
	int volumeBC = 0;
	if (weight < 500) {
		volumeAB = AB * 1;
		volumeBC = BC * 1;
	}
	else if (weight < 1000)
	{
		volumeAB = AB * 4;
		volumeBC = BC * 4;
	}
	else if (weight < 1500)
	{
		volumeAB = AB * 7;
		volumeBC = BC * 7;
	}
	else if (weight < 2000)
	{
		volumeAB = AB * 9;
		volumeBC = BC * 9;
	}
	if (volumeAB == 0 or volumeBC == 0) {
		cout << "понад 2000 кг літак не піднімає." << endl;
	}
	if (volumeAB > 300 or volumeBC > 300) {
		cout << "неможливості подолати відстаней " << endl;
	}
	else {
		int res = 300 - volumeAB;
		int add = volumeBC - res;
		if(add > 0)
			cout << "Result :: " << add << endl;
		else {

		}
	}

}

