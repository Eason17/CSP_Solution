// 思路：不需要移动数组，在输入的时候直接进行移动，对数组的下标进行操作。

#include <iostream>

using namespace std;

int main(){
    int n, m;
    int arr[100];
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> arr[(i + m) % n];
    }
    for(int i = 0; i < n - 1; ++i){
        cout << arr[i];
        cout << " ";
    }
    cout << arr[n-1];
    return 0;
}
