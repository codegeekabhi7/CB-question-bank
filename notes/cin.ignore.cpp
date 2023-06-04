// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    char arr[10];
    cin>>n;
    //cin.ignore used so that when pressed enter the terminal will ingore the enter command and go for the array input if we dont use that then the cin input will only go to buffer
    cin.ignore();
    cin.getline(arr,10);
    cout<<n<<endl;
    cout<<arr<<endl;
    

    return 0;
}
