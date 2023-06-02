#include<iostream>
#include<vector>
using namespace std;
void multiple(int N1,int N2){
	vector<int> arr;
	int term=0;
	int count =0;
	int n=1;
	// for(int i=1;i<=a;i++){
	// 	temp= 3*i+2;
	// 	arr.push_back(temp);
	// }
	// for(int i=0;i<arr.size();i++){
	// 	if(arr[i] % b == 0){
	// 		arr.erase(arr.begin()+i);
	// 		i--;
	// 	}
	// }
	while (count < N1) {
        int term = 3 * n + 2;
        if (term % N2 != 0) {
            arr.push_back(term);
            count++;
        }
        n++;
    }
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}
}
int main() {
	int a;int b;
	cin>>a>>b;
	multiple(a,b);

	return 0;
}
