#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int n = 9;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		arr[i] = rand() % 21-10;
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
		
	}
	cout << sum << ' ';


	return 0;
}