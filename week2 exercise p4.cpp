#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	do
	{
		if (a % 2 == 1)  // �Ya���_�ƫh���T�[�@ 
			a = a*3 + 1;
		else  // �Ya�����ƫh���G 
			a /= 2;
		cout << a << " ";
	}while(a != 1);  // �Ya������1�h���� 
	return 0;
 } 

