#include <iostream>
using namespace std;

void cantriangle(float a, float b, float c) {
	if (a >= (b + c) or b >= (a + c) or c >= (b + a))
		cout << "incorrect";
	else
		cout << "correct";

}


int main() {

	
	float slid1 , slid2 , slid3;
	cout << "enter first slid";
	cin >> slid1;
	cout << "enter secound slid";
	cin >> slid2;
	cout << "enter third slid";
	cin >> slid3;

	cantriangle(slid1, slid2, slid3);

}
