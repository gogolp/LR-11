#include<iostream>

using namespace std;

int main()
{
    
    int const SIZE = 10;
    int arr[SIZE]{ 12, -43, 10 ,6 ,44 ,-37, -16, 27, -64, -17 };

    cout << "Масив: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int minValue = arr[0];
    int index = 0;

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
            index = i + 1;
        }
    }
    cout << "Мінімальне число масиву: " << minValue << endl;
    cout << endl;

    cout << "Номер мінімального числа масиву: " << index << endl;
    cout << endl;

    int sum = 0;
    int minus = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if(arr[i] < 0)
        {
            minus++;
        }
        if (minus == 2)
        {
            break;
        }
        if (arr[i] >= 0 && minus == 1)
        {
            sum += arr[i];
        }
    }
    
    cout << "Сума елементів масиву між першим і другим відємними елементами: " << sum << endl;
    cout << endl;

    int j = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (abs(arr[i]) <= 1)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    
    cout << "Впорядкований масив: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}