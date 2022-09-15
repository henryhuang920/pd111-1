#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	do
	{
		if (a % 2 == 1)  // 璝a计玥 
			a = a*3 + 1;
		else  // 璝a案计玥埃 
			a /= 2;
		cout << a << " ";
	}while(a != 1);  // 璝aぃ单1玥狡 
	return 0;
 } 

