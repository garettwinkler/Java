#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int queries;
    int currentQuery;
    int value;
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        cin >> currentQuery;
        cin >> value;
        if (currentQuery == 1) {
            s.insert(value);
        }
        else if (currentQuery == 2) {
            s.erase(value);
        }
        else {
            set<int>::iterator it = s.find(value);
            if (it != s.end()) {
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }
    
    return 0;
}
