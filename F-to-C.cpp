#include<iostream>
using namespace std;
int main() {
	int min_f,max_f,step;
	cin>>min_f>>max_f>>step;
	for(int i=min_f;i<=max_f;i += step){
	int f = ((i-32)*5)/9;
	cout<<i<<'\t'<<f<<endl;
	}
	return 0;
}
