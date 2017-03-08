#include <algorithm>

int solution(vector<int> &A) {
    
    vector<int> B = A;

    int max = 0;    //count of instances of leader 
    int leader;     //leader of whole vector
    int size = A.size();
    int leaderNum = size/2 + 1;
    
    sort(A.begin(), A.end());
    
    //this block gets the leader and its count
    int count = 1;
    int current;
    int newElem;
    for (int i = 0; i < size; i++) {
        newElem = A[i];
        if (newElem == current) {
            count++; 
            if (count > max) max = count;
            if (count >= leaderNum) {
                leader = A[i];
            }
        }
        else {
            count = 1;
            current = newElem;
        }
    }
    
    //this block counts instances of an equileader occuring
    int sliceCount = 0;
    int equileaders = 0;
    for (int i = 0; i < size; i++) {
        current = B[i];
        if (current == leader) {
            sliceCount++; 
        }
        if ( sliceCount >= ((i+1)/2 + 1) && (max - sliceCount) >= ((size - (i+1))/2+1) ) {
            equileaders++;
            //cout << "Equileader at index: " << i << endl;
        }
        
    }

    return equileaders;
}

