#include <iostream>
#include <iomanip>
using namespace std;
int a,n;
int arr[100000];
void reverseArray(int* start, int* end) {
	int* start = arr;
	int* end = arr + n - 1;
	while (start < end) {
		int temporary = *start;
		    *start=*end;//���Ϊ����λ��//ǰһ���汾ֻ��end��Ϊ��start��ֵ��start��Ȼ���䣻������ע�⽻����ֵһ��Ҫ���߶�����
			*end=temporary;
			start++; end--;
	}

}
int main() {
	cout << "���������ָ���";
	cin >> n;
	for (int i = 0; i < n; i++)
	{   cin >> a;
	    arr[i] = a;
	}
	//int* start = arr;
	//int* end = arr + n - 1;
	//while (start < end) {
	//	int temporary = *start;
	//	    *start=*end;//���Ϊ����λ��//ǰһ���汾ֻ��end��Ϊ��start��ֵ��start��Ȼ���䣻������ע�⽻����ֵһ��Ҫ���߶�����
	//		*end=temporary;
	//		start++; end--;
	//}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}