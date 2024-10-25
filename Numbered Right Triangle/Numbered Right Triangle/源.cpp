#include <iostream>
#include <iomanip>
using namespace std;
void create_triangle(int n) {
	int  m;
	int count = 1;
	m = n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++)
		{
			cout << std::setfill('0') << std::setw(2) << count;
			count++;
		}
		--n;
		cout << endl;
	}

	}

int main() {
	int n;
	cin >> n;
	create_triangle(n);

	return 0;
}