#include <iostream> // ��׼���������
#include <vector>   // ��׼ģ����е�����
#include <string>   // C++ �ַ�����
#include <cmath>    // ��ѧ����
using namespace std;

int main() {
	int a , Type , n ;

	cin >> a;
	Type = sizeof(a);
	switch (Type)
	{
	case 1:
		n = 1;
		break;
	case 2:
		n = 2;
		break;
	default:
		cout <<Type;
		break;

	}

    return 0;
}