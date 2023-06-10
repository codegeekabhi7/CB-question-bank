#include <iostream>
using namespace std;

int main() {
    int tr, tc;
    cin >> tr >> tc;

    int arr[tr][tc];

    for (int i = 0; i < tr; i++) {
        for (int j = 0; j < tc; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < tr; i++) {
        for (int j = 0; j < tc; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < tc; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < tr; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int i = tr - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
