// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    
    if (A.size() == 0) return 0;
    
    int profit = 0;
    int min = A[0];
    int max = A[0];
    profit = max - min;
    for (unsigned int i = 0; i < A.size(); i++) {
        int currentPrice = A[i];

        if (currentPrice < min) {
            min = currentPrice;
            max = currentPrice;
        }        
        else if (currentPrice > max) {
            max = currentPrice;
            if ((max - min) > profit) {
                profit = max - min;
            }
        }
    }
    return profit;
}
