#include<iostream>
using namespace std;
void bubblesort(int arr[10],int n){
	for(int i=0;i<n;i++){
		for(int j = 0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main() {
    int arr[10];
    int size;
	cin>>size;

    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    bubblesort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
