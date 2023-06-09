#include<iostream>
#include<string>

using namespace std;

int main() {

	string a;
	cin>>a;

	int n = a.length();

	for(int i=0;i<n-1;i++){

		if(a[i] == a[i+1]){

			a.erase(i+1,1);

			n = a.length();

			i--;
		}
	}
	cout<<a<<endl;
	return 0;
}
