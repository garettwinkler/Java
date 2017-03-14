// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <limits>

int solution(vector<int> &A) {
    int size = A.size();
    
    if (size < 4) return 0;
    
    int first = 0; 
    int second = 1; 
    int third = 2; 
    int curSliceSum = 0;
    int maxSlice = std::numeric_limits<int>::min();
    for (int i = 0; i < size; i++) {
        first = i;
        for (int j = i+1; j < size; j++) {
            second = j;
            for (int k = j+1; k < size; k++) {
                third = k;
                for (int j = first; j < third; j++) {
                    if (j != first && j != second && j != third) {  //doesn't  need last condition but whatever
                        curSliceSum += A[j];
                    }
                }
                //cout << curSliceSum << " " ;
                if (curSliceSum > maxSlice) {
                    maxSlice = curSliceSum;    
                }
                curSliceSum = 0;                
            }
            //cout << endl;
        }
       
    }
    
    return maxSlice;
}
