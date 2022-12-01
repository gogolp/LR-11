#include<iostream>

using namespace std;

int main()
{
    
	int choice;

	cout << "Виберіть задачу 1, 2, 3: ";
	cin >> choice;

	if (choice == 1)
	{
        int n;
        cout << "Введіть значення n для 1+3+5+7+...+(2n-1):" << endl;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += 2 * i - 1;
        }
    
        cout << "Відповідь:" << sum << endl;
        return 0;
	}
	if (choice == 2)
	{
	    double S = 0;
        double N = 0;
        int srok = 0;
    
        cout << "Введіть суму внеску: ";
        cin >> S;
    
        cout << "Введіть суму, яку хочете отримати: ";
        cin >> N;
    
        while (S < N)
        {
            S += S * 20 / 100.0;
            srok = srok + 1;
        }
        cout << "Для отримання суми " << N << " буде потрібно " << srok << " років" << endl;
        
    return 0;
	}
	if (choice == 3)
	{
	    int K, G;
        cout << "Введіть числа K and G:" << endl;
        cin >> K >> G;
    
        for (int i = 1; i < K; i++) {
            int sum = 0;
            int number = i;
            while (number > 0) {
                sum += number % 10;
                number /= 10;
        }
        if (sum * sum == G) {
            cout << "Всі числа що підходять під умову:" << i << endl;
        }
    }

    return 0;	
	}
}