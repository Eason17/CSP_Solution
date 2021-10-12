#include <iostream>

using namespace std;

int main(){
    long int a, b;
    int pa=0, pb=0, da, db;
    while(cin >> a >> da >> b >> da){
        while(a / 10 != 0){
            if(a % 10 == da){
                pa = pa * 10 + da;
            }
            a /= 10;
        }
        while(b / 10 != 0){
            if(b % 10 == db){
                pb = pb * 10 + db;
            }
            b /= 10;
        }
        cout << pa + pb << endl;
    }
    return 0;
}
