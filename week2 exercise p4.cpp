#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	do
	{
		if (a % 2 == 1)  // 若a為奇數則乘三加一 
			a = a*3 + 1;
		else  // 若a為偶數則除二 
			a /= 2;
		cout << a << " ";
	}while(a != 1);  // 若a不等於1則重複 
	return 0;
 } 

