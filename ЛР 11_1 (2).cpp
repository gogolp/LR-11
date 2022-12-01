#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double x, y, r;

    cout << "Введіть бажаний радіус:";
    cin >> r;

    cout << "Введіть координату Х:";
    cin >> x;

    cout << "Введіть координату У:";
    cin >> y;

    if (x >= 0 && y <=0 && (pow(x,2) + pow(y,2) <= r ))
    {
        cout << "Точка є частиною зашрихованої області" << endl;
    }
    else if (x <= 0 && y >= 0 && (abs(x) <= r) && (abs(y) <= r))
    {
        cout << "Точка є частиною зашрихованої області" << endl;
    }
    else 
    {
        cout << "Точка не є частиною зашрихованої області" << endl;
    }
}