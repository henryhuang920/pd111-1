#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, tInch = 0, result1 = 0, result2 = 0, result3 = 0;  // 將輸入與輸出用的主要變數宣告 
	cin >> n >> t;  // 輸入人數、上限 
	tInch = t * 12;  // 將上限轉成英吋 
	for(int i = 0; i < n; i++)
	{
		int x = 0, type = 0;
		cin >> x >> type;  // 輸入每個人身高 
		if(x >= tInch)
		{
			switch(type)  // 球員位置為何就加哪邊結果 
			{
				case 1:
					result1++;
					break;
				case 2:
					result2++;
					break;
				case 3:
					result3++;
					break;
			}
		}
	}
	cout << result1 << ',' << result2 << ',' << result3;
	return 0;
 } 

