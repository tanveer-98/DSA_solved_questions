#include <iostream>
using namespace std;
int returnFirstSetBit(int n){
    return 1+(n&~(n-1))/2;
}
int main() {
	int n;

	cin >> n;

	cout<< returnFirstSetBit(n) <<endl;

	return 0;
}

