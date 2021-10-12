#include <iostream>

using namespace std;

const int MAXN = 100000;
int arr[MAXN] = {0};

int main(){
    int num, i, score;
    int max_num, max_score = 0;
    while(cin >> num){
        while(cin >> i >> score){
            arr[i] += score;
            if(arr[i] >= max_score){
                max_score = arr[i];
                max_num = i;
            }
        }
        cout << max_num <<' ' << max_score << endl;
    }
    return 0;
}
