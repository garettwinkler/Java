#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int count = 0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int temp = n;
        vector<int> digitArr;
        while ( n != 0) {
            digitArr.push_back(n%10);
            n /= 10;
        }
        for (int i = 0; i < digitArr.size(); i++) {
            if (digitArr[i] != 0 && temp % digitArr[i] == 0) {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
        digitArr.clear();
    }
    return 0;
}
