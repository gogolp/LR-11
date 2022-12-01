#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
 
int main()
{
    int const n = 10;
    int mas[n];
    
    srand(time(0));
    
    for (int i = 0; i < n; i++)
        mas[i] = rand() % 201 - 100;
    for (int i = 0; i < 10; i++)
        cout<<mas[i]<<" ";
        
        cout << "" << endl;
    
        cout << "Макс: " << *max_element (mas, mas + 6) << endl;
        
        int last_pos = n - 1;
        
        while (last_pos!=-1 && mas[last_pos] <= 0)
        {
            --last_pos;
        }
        if (last_pos==-1)
        {
            cout << "Позитивних елементів немає\n";
        }
        else
        {
            double sum = 0;
            for (int i = 0; i < last_pos; i++)
                sum+=mas[i];
            cout << "Сумма: " << sum << endl;
     
            int a, b;
            
            cout << "Введіть значення для a та b:" << endl;
            cin >> a >> b;
            
            cout << "[ " << a << " , " << b << " ]\n";
     
            int i = 0, k = 0;
            while (i < n - k)
            {
                if (fabs (mas[i]) >= a && fabs(mas[i]) <= b)
                {
                    for (int j = i; j < n - k - 1; j++)
                        mas[j] = mas[j + 1];
                    ++k;
                }
                else
                    ++i;
            }
     
            for (i = n - 1; k!=0; mas[i] = 0, k--, i--);
     
            for (int i = 0; i < n; i++)
                cout << mas[i] << ' ';
            cout << endl;
        }
}