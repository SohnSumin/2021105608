#include <iostream>
using namespace std;

int main()
{
	int i = 0; 
	int j = 0; 
	int v = 0;

	for (i = 2; i < 10; i++)
	{
		cout << i << "´Ü" << '\t';

		for (j = 1; j < 10; j++)
		{
			v = i * j;

			cout << i << "x" << j << "=" << v << '\t';
		}

		cout << endl;
	}
	return 0;
}