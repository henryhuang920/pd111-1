#include <iostream>
using namespace std;

int main()
{
	int gender = 0, age = 0, result = -1;  // 將輸入與輸出用的主要變數宣告 
	cin >> gender >> age;
	switch(gender)
	{
		case 0:
			(age >= 16)?(result = 1):(result = 0);  // 以result代表合法否的值 
			break;
		case 1:
			(age >= 18)?(result = 1):(result = 0);
			break;
	}
	if(result == 1)
		cout << "Yes";  // 以雙引號輸出字元避免錯誤 
	else if (result == 0)
		cout << "No";
	return 0;
 } 
