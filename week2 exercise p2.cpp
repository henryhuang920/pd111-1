#include <iostream>
using namespace std;

int main()
{
	int n = 0, max = -100, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		sum += x;  // 總和直接加入x 
		(x > max)?(max = x): (max = max);  // 若x比目前最大值大則將最大值改寫為x 
	}
	cout << max << "," << sum;
	return 0;
 } 

