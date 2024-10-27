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
		    *start=*end;//左边为储存位置//前一个版本只让end变为和start的值，start仍然不变；（！！注意交换赋值一定要两边都换）
			*end=temporary;
			start++; end--;
	}

}
int main() {
	cout << "请输入数字个数";
	cin >> n;
	for (int i = 0; i < n; i++)
	{   cin >> a;
	    arr[i] = a;
	}
	//int* start = arr;
	//int* end = arr + n - 1;
	//while (start < end) {
	//	int temporary = *start;
	//	    *start=*end;//左边为储存位置//前一个版本只让end变为和start的值，start仍然不变；（！！注意交换赋值一定要两边都换）
	//		*end=temporary;
	//		start++; end--;
	//}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}