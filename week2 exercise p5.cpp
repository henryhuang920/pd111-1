#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, p = 0, profitMax = 0;
	cin >> a >> b >> c;
	for(int i = c; i <= (a / b); i++)  // ���D�O�I�ϥνa�|�k 
	{
		int x = (a - b * i) * (i - c);  // �D�C�Ӿ�Ƴ��ұa�X���`�Q�q 
		if(profitMax < x)  // �Yx�񤧫e�Ҧ��ȧ�j�h��g 
		{
			p = i;
			profitMax = x;
		}
	}
	cout << p << " " << profitMax;
	return 0;
 } 

