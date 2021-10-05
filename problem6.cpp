#include <iostream>
using namespace std;

int main()
{
	char c[5];

	for(int i = 0; i < 5; i++)
	{
		cin >> c[i];
	}

	for(int i = 0; i < 5; i++)
	{
		for(int count = 0, start = 5 - i; count < 5; count++, start++)
		{
			cout << c[start % 5];
		}
		cout << endl;
	}

	return 0;
}