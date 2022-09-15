#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, tInch = 0, result1 = 0, result2 = 0, result3 = 0;  
	int max1 = 0, max2 = 0, max3 = 0;  // 將輸入與輸出用的主要變數宣告 
	cin >> n >> t;  // 輸入人數、上限 
	for(int i = 1; i <= n; i++)
	{
		int x = 0, type = 0;
		cin >> x >> type;  // 輸入每個人身高 
		switch(type)  // 球員位置為何就加哪邊結果 
		{
			case 1:
				if(x > max1)
				{
					max1 = x;  // 若球員身高超過之前所有同類別球員身高則改寫最高值
					result1 = i;  // 記錄此球員編號 
				}
				break;
			case 2:
				if(x > max2)
				{
					max2 = x;
					result2 = i;
				}
				break;
			case 3:
				if(x > max3)
				{
					max3 = x;
					result3 = i;
				}
				break;
		}
	}
	cout << result1 << ',' << result2 << ',' << result3;
	return 0;
 } 

