#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int randInt(int min, int max)
{
       return min + (rand() % (max - min + 1));
}

int main(int argc, char *argv[])
{
    const int DIM = 9;
    int matrix[DIM][DIM];
    int Z;
    
    srand(time(0));

 

       for (int i = 0; i < DIM; i++)
       {
            for (int j = 0; j < DIM; j++)
            {
                matrix[i][j] = randInt(-100, 100);
                
                cout << setw(4) << matrix[i][j] << ' ';
            }
            cout << endl;

       }
       cout << endl;
       
       cout << "Введіть значення Z:";
       cin >> Z;
       
       cout << endl;
       cout << "Rількість елементів, значення яких перевищує число Z (" << Z << "):" << endl;
    
       int count = 0;

       for (int i = 0; i < DIM; i++) 
       {
            for (int j = 0; j < DIM; j++) 
            {
                if (matrix[j][i] > Z)
                    count++;
            }
               cout << setw(2) << "( " << i + 1 << " - стовпчик )" << count << ' ' << endl;
               count = 0;
       }
       cout << endl;

       int sum = 0;

       for (int i = 0; i < DIM; i++) 
       {
            for (int j = 0; j < DIM; j++) 
            {
                if (matrix[i][j] < 0)
                    sum += matrix[i][j];
            }
       }
       cout << endl;
       cout << "Сумма значень від’ємних елементів матриці: " << sum << endl;
       cout << endl;
       
       return 0;

}

