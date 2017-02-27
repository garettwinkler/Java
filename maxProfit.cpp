// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int profit = 0;
    int minIndex = 0;
    int maxIndex = 0;
    int min = A[0];
    int max = A[0];
    for (unsigned int i = 0; i < A.size(); i++) {
        int currentPrice = A[i];
        cout << currentPrice << endl;

        if (currentPrice < min) {
            min = currentPrice;
            max = currentPrice;
            maxIndex = i;
            minIndex = i;
            cout << "Set new min at: " << min << endl;
        }        
        else if (currentPrice > max) {
            max = currentPrice;
            maxIndex = i;
            cout << "Set new max at: " << max << endl;
        }
    }
    
    // cout << "minIndex: " << minIndex << endl;
    // cout << "maxIndex: " << maxIndex << endl;
    
    if (minIndex < maxIndex) {
        profit = max - min;
    }
    
    // cout << "max: " << max << endl;
    // cout << "min: " << min << endl;
    // cout << "profit: " << profit << endl;
    
    return profit;
}
