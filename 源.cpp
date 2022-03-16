
#include <iostream>
#include <string>
#include<cmath>
#include<iomanip>

	using namespace std;
	
	int main()
	{
		int temp = 0;
		int arr[] ={ 5,7,6,8,12,9,3 };
		
		int n = sizeof(arr) / sizeof(arr[0]);
		
		for (int i = 0; i<= n - 1;i++)
		{
			for (int j = 0; j <n-i-1;j++)
			{
				if (arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		for (int q = 0; q <= 6; q++)
		{
			cout << arr[q] << endl;
		}
		system("pause");
		return 0;
	}
	