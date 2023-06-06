#include<iostream>
#include <climits>
using namespace std;
int main() {
	int n;
	int arr[10];
	int max = INT_MIN;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	cout<<max<<endl;
	return 0;
}
