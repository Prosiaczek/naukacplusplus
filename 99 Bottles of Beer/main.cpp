#include <iostream>

using namespace std;

int main()
{
	int start = 99;
	while (true)
	{
		cout << start << " bottles of beer on the wall " << start << " bottles of beer. Take one down and pass it around ";
		start--;
		cout<< start  << " bottles of beer on the wall.\n";



		if (start == 1)
		{
			cout << "1 bottle of beer on the wall, 1 bottle of beer.Take it down and pass it around - no more bottles of beer on the wall.";
			break;
		}
	}





	cin.ignore(10);
	return 0;
}