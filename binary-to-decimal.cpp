#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	int m;
	int sum=0;
	cin>>n;
	while(n!=0){
		int digit = n%10;
		 sum += digit*pow(2,m);
		m++;
		n /= 10;
	}
	cout<<sum;
	return 0;
}
