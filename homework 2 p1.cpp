#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, tInch = 0, result = 0;  // 將輸入與輸出用的主要變數宣告 
	cin >> n >> t;  // 輸入人數、上限 
	tInch = t * 12;  // 將上限轉成英吋 
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;  // 輸入每個人身高 
		if(x >= tInch)
		{
			result++;  // 若身高大於上限則讓計數加一 
		}
	}
	cout << result;
	return 0;
 } 

