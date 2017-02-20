#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//lower_bound Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val.

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vect;
    int inputSize;
    int input;
    int queries;
    int currentQuery;
    cin >> inputSize;
    for (int i = 0; i < inputSize; i++) {
        cin >> input;
        vect.push_back(input);      
    }
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        cin >> currentQuery;
        //vector<int>::iterator low;
        auto low = lower_bound(vect.begin(), vect.end(), currentQuery); //still not sure how auto works
        int index = low-vect.begin();
        if (vect[index] == currentQuery) {
            cout << "Yes ";
        }
        else {
            cout << "No ";
        }
        cout << low-vect.begin()+1 << endl;
    }


    return 0;
}
