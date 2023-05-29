#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> arr;
	vector<int> arr1;
	while(n>0){
		int temp=n%10;
		arr.push_back(temp);
		n/=10;
		int temp1 = n%10;
		arr1.push_back(temp1);
		n/=10;
	}
	for(int i=0;i<n/2;i++){
		arr1[i]+=arr1[i+1];
		
	}

	for(int i=0;i<n/2;i++){
		arr[i]+=arr[i+1];
		
	}
	for(int i=0;i<n/2;i++){
		cout<<arr1[i];
	}
	for(int i=0;i<n/2;i++){
		cout<<arr[i];
	}
	return 0;
}
