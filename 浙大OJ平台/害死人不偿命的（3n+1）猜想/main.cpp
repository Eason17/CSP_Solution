#include <iostream>

using namespace std;

int main()
{
    int step;
    int n;
    while (cin >> n){
        step = 0;
        for(n; n!=1; step++){
           if(n % 2 == 0){
                n /= 2;
            }
            else{
                n = (3 * n + 1) / 2;
            }
        }
        cout << step << endl;
    }
    return 0;
}
