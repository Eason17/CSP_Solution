// ˼·������Ҫ�ƶ����飬�������ʱ��ֱ�ӽ����ƶ�����������±���в�����

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
