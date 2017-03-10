#include <cmath>
#include <limits>


int solution(int N) {

    // better way I didn't think of
    // for(int i = floor(sqrt(N)); i > 0; i--)
    //     if(N % i == 0)
    //         return 2 * (i + (N/i));
    
    // order O(sqrt(N)) 
    int max = floor(sqrt(N));
    int minPer = std::numeric_limits<int>::max();   //c++ equiv of Integer.MAX_VALUE
    for (int i = 1; i <= max; i++) {
        if (N % i == 0) {
            int per =  2 * (i + (N/i));    
            if (per < minPer) minPer = per;
        }
    }
    
    return minPer;
}
