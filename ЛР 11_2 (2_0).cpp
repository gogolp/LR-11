#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

int main()
{
    
    srand(time(NULL));

    const int SIZE = 200;
    int arr[SIZE];

    cout << "Масив:";

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 101;

        cout << setw(4) << arr[i];
    }
    cout << endl;


    int sum = 0, t = 0, index = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    sum = t;
    for (int i = 1; i < 191; i++)
    {
        t += arr[i + 9] - arr[i - 1];
        if (t > sum)
        {
            sum = t;
            index = i;
        }
    }
    cout << endl;

    cout << "Елементи масиву які створюють неперевну ділянку: ";
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
        cout << arr[index + i] << " ";
    }
    cout << endl;

    cout << "Сума неперевної ділянки: " << sum;
   
}