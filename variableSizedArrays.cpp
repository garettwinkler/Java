#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int size; 
    int queries;
	cin >> size >> queries;
	
	int **twoDArray = new int*[size];
	int sizeArray[size];

	for(int i = 0; i < size; i++) {
		int kSize;
		cin >> kSize;
		sizeArray[i] = kSize;
		twoDArray[i] = new int[kSize];
		for(int j = 0; j < kSize; j++) {
			cin >> twoDArray[i][j];
		}
	}

	// DEBUG
    /*
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < sizeArray[i]; j++) {
			cout << twoDArray[i][j] << " ";
		}
		cout << endl << endl;
	}
    */
	

	for(int i = 0; i < queries; i++) {
		int index;
        int elem;
		cin >> index >> elem;
		cout << twoDArray[index][elem] << endl;
	}
	return 0;

}
