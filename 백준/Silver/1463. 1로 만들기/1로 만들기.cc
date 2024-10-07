#include <iostream>

using namespace std;

int arr[3000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	arr[2] = 1, arr[3] = 1;
	for (int i = 2; i <= 1000000; i++) {
		if (arr[i] == 0)
			arr[i] = 21e8;
		int a1, a2, a3;
		a1 = i + 1;
		a2 = i * 2;
		a3 = i * 3;
		if (arr[a1] == 0) 
			arr[a1] = 21e8;
		if (arr[a2] == 0) 
			arr[a2] = 21e8;
		if (arr[a3] == 0) 
			arr[a3] = 21e8;
		if (arr[a1] > arr[i] + 1)
			arr[a1] = arr[i] + 1;
		if (arr[a2] > arr[i] + 1)
			arr[a2] = arr[i] + 1;
		if (arr[a3] > arr[i] + 1)
			arr[a3] = arr[i] + 1;
	}
	cout << arr[N];


	return 0;

}