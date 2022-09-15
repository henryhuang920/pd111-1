#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	for(int i = 0; i <= 5; i++)  // 第一層迴圈計算所有x的可能性 
	{
		for(int j = 0; j <= 5; j++)  // 第二層迴圈計算所有y的可能性 
		{
			if(i == x1 || i == x2 || i == x3)  // 剔除跟三點同垂直線的狀況 
				continue;
			else if(j == y1 || j == y2 || j == y3)  // 剔除跟三點同水平線的狀況 
				continue;
			else if(abs(i - x1) == abs(j - y1) || abs(i - x2) == abs(j - y2) || \
					abs(i - x3) == abs(j - y3))  // 剔除跟三點同對角線的狀況 
				continue;
			else
				cout << i << " " << j << "\n";
		}
	}
	return 0;
 } 
