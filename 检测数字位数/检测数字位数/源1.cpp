#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
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