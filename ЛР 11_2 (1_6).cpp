#include<iostream>

using namespace std;

int main()
{
    
    int const SIZE = 10;
    int arr[SIZE]{ 22, -44, 4 ,13 ,2 ,1 , 0, 19, -1, -17 };

    cout << "Масив: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int x = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if(arr[i] >= 0)
        {
            x = x + 1;
        }
    }
    cout << "Кількість додатніх елементів масиву: " << x <<endl;
    cout << endl;

    int sum = 0;

    for (int i = SIZE - 1 ; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            break;
        }
        sum = sum + arr[i];
    }
    cout << "Сума елементів масиву після 0: " << sum << endl;

    int j = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] <= 1)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    cout << endl;

    cout << "Впорядкований масив: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}