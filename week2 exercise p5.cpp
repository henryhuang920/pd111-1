#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, p = 0, profitMax = 0;
	cin >> a >> b >> c;
	for(int i = c; i <= (a / b); i++)  // 為求保險使用窮舉法 
	{
		int x = (a - b * i) * (i - c);  // 求每個整數單位所帶出的總利益 
		if(profitMax < x)  // 若x比之前所有值更大則改寫 
		{
			p = i;
			profitMax = x;
		}
	}
	cout << p << " " << profitMax;
	return 0;
 } 

