#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	for(int i = 0; i <= 5; i++)  // �Ĥ@�h�j��p��Ҧ�x���i��� 
	{
		for(int j = 0; j <= 5; j++)  // �ĤG�h�j��p��Ҧ�y���i��� 
		{
			if(i == x1 || i == x2 || i == x3)  // �簣��T�I�P�����u�����p 
				continue;
			else if(j == y1 || j == y2 || j == y3)  // �簣��T�I�P�����u�����p 
				continue;
			else if(abs(i - x1) == abs(j - y1) || abs(i - x2) == abs(j - y2) || \
					abs(i - x3) == abs(j - y3))  // �簣��T�I�P�﨤�u�����p 
				continue;
			else
				cout << i << " " << j << "\n";
		}
	}
	return 0;
 } 
