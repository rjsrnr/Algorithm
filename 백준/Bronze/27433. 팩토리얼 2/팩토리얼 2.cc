#include <iostream>
using namespace std;

long long int n, result = 1;

void func(int level)
{
	if (level > n)
	{
		return;
	}

	func(level + 1);
	if(level >0)
		result *= level;
}

int main()
{
	cin >> n;
	func(0);

	cout << result;


	return 0;
}