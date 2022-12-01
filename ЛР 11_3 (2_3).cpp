#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>

using namespace std;

const int n=9;
const int m=9;

int summ(int a[m][m])
{
    int i,j,s=0;
    
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
        if (i>j) 
            s+=a[i][j];
    return s;
}
int main()
{
    int k,a[m][m],i,j,sum[n],max;
    
    for(k=0;k<n;k++)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {a[i][j]=rand() % 201 - 100;
            cout<<setw(4) << a[i][j]<<"\t";
            }
        cout<<endl;
        }
    sum[k]=summ(a);
    
    cout<<"Сума елементів нижче діагоналі:" << sum[k]<<endl;
    }
    max=sum[0];
    
    for(i=1;i<n;i++)
        if (sum[i]>max) 
            max = sum[i];
    cout<<"Максимальная сума = "<< max <<endl;
    
    return 0;
}