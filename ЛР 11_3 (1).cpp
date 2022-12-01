#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;
 
const int SIZE = 9;
 
int main() 
{
    srand(time(NULL));
    
    int arrsort[SIZE][SIZE]{ 0 };
    int arr[SIZE][SIZE];
    int posi, posj, pos = -1, num(0);
    posi = posj = SIZE / 2;

    cout << "Матриця:" << endl;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = rand() % 101;
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Матриця запевнена спірально:" << endl;
    
    int *pArr = &arr[0][0];

    for (int i = 0; i < SIZE * SIZE - 1; i++) {
        for (int j = 0; j < SIZE * SIZE - i - 1; j++) {
            if (pArr[j] > pArr[j + 1]) swap(pArr[j], pArr[j + 1]);
        }
    }

    for (int n = 1; n < SIZE; n++) {
        for (int i = 0; i < n; i++) {
            arrsort[posi][posj] = pArr[num++];
            posj += pos;
        }
        for (int i = 0; i < n; i++) {
            arrsort[posi][posj] = pArr[num++];
            posi += pos;
        }
        if (n == SIZE - 1) {
            pos *= -1;
            for (int i = 0; i <= n; i++) {
                arrsort[posi][posj] = pArr[num++];
                posj += pos;
            }
        }
        pos *= -1;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << setw(4) << arrsort[i][j];
        }
        cout << endl;
    }

    return 0;
}