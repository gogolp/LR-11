#include<iostream>

using namespace std;

int main()
{
    
	int n;

	cout << " Відомо 3 мобільні оператори України, ось їхні коди( 067, 050, 063, 096, 066, 073 )." << endl
		 << " Щоб дізнатися назву оператору, введіть код (без нуля попереду, приклад: 67, 50 і тд): ";
	cin >> n;

	if ( n == 67)
	{
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Київстар." << endl;
	}
		
	else if ( n == 50)
	{
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Vodafone." << endl;
	}
    
    else if ( n == 63)
    {
		cout << " " << endl;
		cout << " Телефонний код" << n << " належить оператору Lifecell." << endl;
    }

	else if ( n == 96)
	{
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Київстар." << endl;
	}
		
	else if ( n == 66)
	{
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Vodafone." << endl;
	}
    
    else if ( n == 73)
    {
		cout << " " << endl;
		cout << " Телефонний код" << n << " належить оператору Lifecell." << endl;
    }

	else
	{
		cout << " " << endl;
		cout << " Такого коду не існує або в нашій базі немає цього коду!" << endl;
	}
}