#include <iostream>
using namespace std;


void task6(char* str)
{
	int counter_letter = 0;
	int counter_digit = 0;
	int counter_other = 0;

	for (size_t i = 0; /*i < strlen(str)*/ str[i] != '\0'; i++)
	{
		if (isalpha(str[i])) counter_letter++;
		else if (isdigit(str[i])) counter_digit++;
		else counter_other++;
	}
	cout << "Number of letters :: " << counter_letter << endl;
	cout << "Number of digits  :: " << counter_digit << endl;
	cout << "Number of other   :: " << counter_other << endl;
}
void task4(char* str)
{
	for (size_t i = 0; /*i < strlen(str)*/ str[i] != '\0'; i++)
	{
		if (str[i] == '.') str[i] = '!';
		
	}
}
int main()
{
   /* Користувач вводить рядок.Визначити кількість літер, кількість цифр і кількість інших символів, присутніх у рядку.*/
	//Lorem ipsum dolor sit amet, 2consectetur adipiscing elit. Curabitur nec aliquet turpis, nec luctus neque. Quisque ante odio, commodo ut aliquet vel, imperdiet3 vel augue. Vestibulum at3 nisl non ante maximus sodales ac in nulla. Cras erat ligula, cursus ut sem at, vehicula ultric5es nulla. Mauris posuer0e suscipit erat, at consequat dolor egestas sed. Quisque accumsan condimentum luctus. Pellentesque sit am2et felis nec lacus scelerisque placerat ac eu massa. 
	char line[1000];
	cout << "enter line :: ";
	cin.getline(line, 1000);
	task6(line);
	task4(line);
	cout << "Result :: " << line << endl;

}
