#include<iomanip>
#include<cstring>
#include<iostream>//C++����ͷ�ļ� 
#include<algorithm>
extern int n,a[1000], c[1000],number;;
//ͷ�ļ�--���� 
using namespace std;
int singalnumber;
int main() {
	cout << "type-quantity-of-number";
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	for (int i = 0; i < n; i++)
	{
		number = a[i];
		singalnumber = number % 10;
		cout << singalnumber << "  ";
	}
	
	











	return 0;
}