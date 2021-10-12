#include <iostream>

using namespace std;

int main(){
    int i, beer_a=0, beer_b=0;
    int num_a, res_a, num_b, res_b;
    cin >> i;
    for(i; i>0; --i){
        cin >> num_a >> res_a >> num_b >> res_b;
        if(num_a + num_b != res_a){
            ++beer_a;
        }
        if(num_a + num_b != res_b){
            ++beer_b;
        }
        // 同输的情况，二者均减1.
        if((num_a + num_b != res_a) && (num_a + num_b != res_b)){
            --beer_a;
            --beer_b;
        }
    }
    cout << beer_a << " " << beer_b <<endl;
    return 0;
}
