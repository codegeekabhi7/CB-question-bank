#include<iostream>
using namespace std;
int main() {
	char a;
	cin>>a;
	// if(a>='a' && a<='z'){
	// 	cout<<"lowercase";
	// }
	if(islower(a)){
		cout<<"lowercase";
	}
	// else if(a>='A' && a<='Z'){
	// 	cout<<"UPPERCASE";
	// }
	else if(isupper(a)){
		cout<<"UPPERCASE";
	}
	else cout<<"Invalid";
	return 0;
}
