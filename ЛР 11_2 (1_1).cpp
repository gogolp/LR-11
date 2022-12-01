#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	const int size = 10;
	int arr[size] = {1,2,0,24,-12,-3,12,56,-22,37};
    
    sort(begin(arr), end(arr));
    
    cout << arr[1] << endl;
	
}