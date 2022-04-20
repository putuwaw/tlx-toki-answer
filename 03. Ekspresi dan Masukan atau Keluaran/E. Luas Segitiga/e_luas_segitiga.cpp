#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int A, T;
	cin >> A >> T;
	cout << fixed;
	cout << setprecision(2) << (float)A * T / 2 << endl;
	return 0;
}
