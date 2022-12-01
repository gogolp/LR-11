#include<iostream>
#include<cmath>

using namespace std;

double function1(int x)
{
    double a;

    a = (7 * log(3.8 + abs(x)) / (pow(x, 2) + 2));

    return a;
}

double function2(int x)
{
    double b;

    b = (7 * log(3.8 + abs(x)) / (pow(x, 2) + 2));

    return b;
}

int main()
{
    int i = 9, k;
    double a, b, Z;

    double summ1 = 0;
    double summ2 = 0;

    k = i;

    for (int k = i; k <= i + 5; k++)
    {
        a = function1(2);
        summ1 = summ1 + a;
    }

    for (int k = i; k <= i + 8; k++)
    {
        b = function2(2);
        summ2 = summ2 + b;
    }

    Z = pow((summ1 * summ2), (1/4));                      

    cout << "i = " << i << endl;
    cout << "a = " << summ1 << endl;
    cout << "b = " << summ2 << endl;
    cout << "Z = " << Z << endl;

}