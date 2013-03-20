#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
int Array[10], checker;

srand(time(NULL));

for (int i = 0; i < 10; i++)
{
Array[i] = 1 + rand() % 9;
}

cout << "Oroginal array: ";
for (int i = 0; i < 10; i++)
cout << Array[i] << " ";
cout << endl;

do
	{
	checker = 0;
	for (int i = 0; i < 9; i++)
		{
		if (Array[i] > Array[i + 1])
			{
				int y = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = y;
				checker++;
			}
		}
	}
while (checker != 0);

cout << "Sorted array: ";
for (int i = 0; i < 10; i++)
cout << Array[i] << " ";
cout << endl;

}