#include<iostream>
#include<array>
using namespace std;
// int lengthofarr(int arr[10]){
// 	int len = sizeof(arr)/sizeof(arr[0]);
// 	return len;
// }
int main() {
	// int arr1[10];
	// int sumeven =0;
	// int sumodd = 0;
	// for(int i=0;i<lengthofarr(arr1);i++){
	// 	if(i%2 == 0){
	// 		sumeven =+ arr1[i];
	// 	}
	// 	else sumodd += arr1[i];
	// }
	// cout<<sumeven<<endl<<sumodd;
	int n;
	cin>>n;
	int sumeven =0;
	int sumodd=0;
	bool isEven = true;
	int digit;
	while(n>0){
		digit = n%10;
		if(isEven){
			sumeven += digit;
		}
		else sumodd += digit;
		isEven = !isEven;
        n /= 10;
	}
	cout<<sumodd<<endl<<sumeven;
	return 0;
}
