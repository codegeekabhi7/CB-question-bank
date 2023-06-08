#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int multiply =1;
	int digit = 0;
	while(n != 0){
		digit += (n%8)*multiply;
		n /= 8;
		multiply *= 10;
	}
	cout<<digit;
	return 0;
}
