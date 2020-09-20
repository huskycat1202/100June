#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    while (1) {
        int n;
        cin >> n;
        int arr[26];
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << arr[0] << " ";
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                cout << arr[i] << " ";
            }
        }
        cout << "$" << endl;
    }
}