#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // ��׼���������
#include <vector>   // ��׼ģ����е�����
#include <string>   // C++ �ַ�����
#include <cmath>    // ��ѧ����
#include<time.h>
#include<stdlib.h>
//������ָ���������1���ⲻ�ܱ���������
int main() {
	int a,b;//a=input,b�����ж��Ƿ�������
	scanf("%d", &a);
	for (int i = 2; i < a;i++) {
		if (a % i == 0)
			b = 1;
	}
	switch (b)
	{
		case 1 :
		printf("��������"); break;
	default:
		printf("��");
		break;
	}
	return 0;
}