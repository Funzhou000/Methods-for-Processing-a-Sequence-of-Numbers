#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // ��׼���������
#include <vector>   // ��׼ģ����е�����
#include <string>   // C++ �ַ�����
#include <cmath>    // ��ѧ����
#include<time.h>
#include<stdlib.h>
//Q1�����ӡ����//Q2����������//Q3�����ӡ����

//int main() {
//	int x = 54321;
//	do {
//		int d = x % 10;
//		printf("%d", d);
//		if (x>9)
//		{printf(" ");}
//		x /= 10;
//	} while (x > 0);
//
//
//	return 0;
//}//Q1
//int main() {
//	int x = 54321;
//	int t=0;//Ҫ��ʼ��
//		while (x > 0) {
//			int d = x % 10;//�����λ��;
//		t = t * 10 + d;//*10�ø�λ����������
//		x /= 10;//ȷ��x%10���ڷ���ÿλ��
//		}printf("%d", t);
//
//
//
//	return 0;
//}//Q2
int main() {
	int x = 54321;
	int t = 0;//Ҫ��ʼ��
	while (x > 0) {
		int d = x % 10;//�����λ��;
		t = t * 10 + d;//*10�ø�λ����������
		x /= 10;//ȷ��x%10���ڷ���ÿλ��
	}x = t;//�ı�x��ֵ����ʱxΪ���������
	do {
				int d = x % 10;
				printf("%d", d);
				if (x>9)
				{printf(" ");}
				x /= 10;
			} while (x > 0);//�����ӡ���������



	return 0;
}//Q2