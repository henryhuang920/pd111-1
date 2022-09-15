#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, sum = 0;
	cin >> n >> t;
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		if(x == t)  // 假設遇到跟t一樣的值則終止迴圈 
			break;
		else  // 否則不停將x加進sum之中 
			sum += x;
	}
	cout << sum;
	return 0;
 } 
 
