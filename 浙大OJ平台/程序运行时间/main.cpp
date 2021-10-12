#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

const double CLK_TCK  = 100.0;

// 注意保留两位数字，如果是个位数字也需要两位。
int main(){
    int c1, c2, tmp;
    int hour, minute, second;
    cin >> c1 >> c2;
    tmp = round((c2 - c1) / CLK_TCK);
    hour = tmp / 3600;
    minute = tmp % 3600 / 60;
    second = tmp % 60;
    // cout << hour << ":" << minute << ":" << second << endl;
    // 02的目的是保留两位，例如12:09:02
    printf("%02d:%02d:%02d\n", hour, minute, second);
}
