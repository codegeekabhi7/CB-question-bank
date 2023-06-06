#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int m;
	cin>>m;
	int count =0;
	while(n != 0){
		int digit = n%10;
		if(digit == m){
			count++;
		}
		n /= 10;
	}
	cout<<count<<endl;
	return 0;
}
