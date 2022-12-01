#include<iostream>

using namespace std;

int main()
{
    
    int const SIZE = 10;
    int arr[SIZE]{ 2, -10, 15 ,8 ,5 ,-20, -7, 19, -1, -17 };

    cout << "Масив: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int maxValue = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    cout << "Максимальне число масиву: " << maxValue << endl;
    cout << endl;

    int dobytok = 1;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            dobytok = dobytok * arr[i];
        }
    }

    cout << "Добуток від'ємних елементів масиву: "<< dobytok << endl;
    cout << endl;

    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == maxValue)
        {
            break;
        }
        if(arr[i] > 0)
        {
            sum = sum + arr[i];
        }
    }

    cout << "Сума додатніх елементів до найбільшого елемента масиву:" << sum << endl;
    cout << endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - i; j++)
        {
            swap(arr[j], arr[SIZE - j - 1]);
        }
    }

    cout << "Масив у зворотньому порядку: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
