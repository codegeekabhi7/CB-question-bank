#include<iostream>
#include<cmath>
using namespace std;
int binary(string binary){
	int digit = 0;
	int size = binary.length();
	for(int i=0;i<size;i++){
		if(binary[i] == '1'){
			digit += pow(2,size -i -1);
		}
	}
	return digit;
}
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string binary_no;
		cin>>binary_no;
		int decimal = binary(binary_no);
		cout<<decimal<<endl;
	}
	return 0;
}
