#include<iostream>
using namespace std;
int main() {
	char a;
	cin>>a;
	if(islower(a)){
		cout<<"L";
	}
	else if(isupper(a)){
		cout<<"U";
	}
	else cout<<"I";
	return 0;
}
