#include <iostream>

using namespace std;

// ע�����ݷ�Χ����Ҫʹ��long int���͡�
bool compare(long int a, long int b, long int c){
    if(a + b >c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    long int num, a, b, c;
    bool res;
    string result;
    while(cin >> num){
        for(int i=1; i <=num; ++i){
            cin >> a >> b >> c;
            res = compare(a,b,c);
            if (res){
                result = "true";
            }
            else{
                result = "false";
            }
            cout << "Case #" << i << ": " << result << endl;
        }
    }
    return 0;
}
