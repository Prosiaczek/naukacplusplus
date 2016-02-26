#include <iostream>
#include <vector>

using namespace std;




int main()
{
	cout << "kalkulator 0.5\n";
	double temp = 0;
	double wynik = 0;
	double temp2 = 0;
	char znak = 'q';
	bool start = false;
	while (true)
	{
		cin >> temp;
		if (start == false)
		{
			wynik = temp;
			temp = 0;
			
		}
		
		start = true;
		if (znak == '+')
		{
			wynik += temp;
		}
		if (znak == '-')
		{
			wynik -= temp;
		}
		if (znak == '*')
		{
			wynik *= temp;
		}
		if (znak == '/')
		{
			wynik /= temp;
		}
		if (znak == '=')
		{
			cout << wynik;
			break;
		}

		
		cin >> znak;
		if (znak == '=')
		{
			cout << wynik;
			break;
		}
	}
	



	cin.ignore(10);
	return 0;
}
