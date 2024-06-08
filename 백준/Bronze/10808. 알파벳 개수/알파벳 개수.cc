#include <iostream>

using namespace std;

int arr[26];

int main() {
	char map[101];
	cin >> map;
	for (int i = 0; i < 101; i++) {
		if (map[i] == '\0')
			break;
		int num = map[i] - 'a';
		arr[num]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}