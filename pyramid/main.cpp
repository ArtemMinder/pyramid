#include<iostream>
using namespace std;
void pyramid(int i);
int main() {
	unsigned n;
	cout << "Enter the nomber of floors:" << endl;
	cin >> n;
	pyramid(n);
	system("pause");
	return 0;
}
void pyramid(int i) {
	int a = i;
	for (int i = 1; i < a; i++) {
		for (int j = 1; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}