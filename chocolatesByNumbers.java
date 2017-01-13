// Two positive integers N and M are given. Integer N represents the number of chocolates arranged in a circle, numbered from 0 to N - 1.
// 
// You start to eat the chocolates. After eating a chocolate you leave only a wrapper.
// 
// You begin with eating chocolate number 0. Then you omit the next M - 1 chocolates or wrappers on the circle, and eat the following one.
// 
// More precisely, if you ate chocolate number X, then you will next eat the chocolate with number (X + M) modulo N (remainder of division).
// 
// You stop eating when you encounter an empty wrapper.
// 
// For example, given integers N = 10 and M = 4. You will eat the following chocolates: 0, 4, 8, 2, 6.
// 
// The goal is to count the number of chocolates that you will eat, following the above rules.
// 
// Write a function:
// 
// class Solution { public int solution(int N, int M); }
// that, given two positive integers N and M, returns the number of chocolates that you will eat.
// 
// For example, given integers N = 10 and M = 4. the function should return 5, as explained above.
// 
// Assume that:
// 
// N and M are integers within the range [1..1,000,000,000].
// Complexity:
// 
// expected worst-case time complexity is O(log(N+M));
// expected worst-case space complexity is O(log(N+M)).

import java.util.*;

class Solution {
   public int solution(int N, int M) {
      
      if (M == 1) return N;
      if (N % M == 0) return N/M;
      
      int[] chocolates = new int[N];
      int i = 0;
      int numChocolates = 0;      
      while (chocolates[i] != 1) {
         numChocolates++;
         chocolates[i] = 1;
         //System.out.println("i: " + i);
         i = (i+M)%N;
      }

// gets past some of the large number tests but also gets some wrong??
//       i = M;
//       numChocolates++;
//       while (M % N != 0) {
//          numChocolates++;
//          M = M + i;
//          //System.out.println("M = " + M);  
//       }
      
         
            
      return numChocolates; 
   }
    
    
   public static void main(String[] args) {
   
      Solution sol = new Solution();

      //test cases   
        
      System.out.println("N = 12, M = 12: " + sol.solution(12, 12));
      System.out.println("N = 12, M = 6: " + sol.solution(12, 6));
      System.out.println("N = 12, M = 4: " + sol.solution(12, 4));
      System.out.println("N = 12, M = 3: " + sol.solution(12, 3));
      System.out.println("N = 12, M = 2: " + sol.solution(12, 2));
      System.out.println("N = 12, M = 1: " + sol.solution(12, 1));      
      System.out.println("N = 12, M = 5: " + sol.solution(12, 5));
      System.out.println("N = 12, M = 7: " + sol.solution(12, 7));       
      System.out.println("N = 12, M = 8: " + sol.solution(12, 8)); 
      System.out.println("N = 12, M = 9: " + sol.solution(12, 9));
      System.out.println("N = 12, M = 10: " + sol.solution(12, 10));
      System.out.println("N = 12, M = 11: " + sol.solution(12, 11));            
      System.out.println();
      

      System.out.println("N = 4, M = 4: " + sol.solution(4, 4));
      System.out.println("N = 4, M = 3: " + sol.solution(4, 3));
      System.out.println("N = 4, M = 2: " + sol.solution(4, 2));
      System.out.println("N = 24, M = 18: " + sol.solution(24, 18));
      System.out.println(sol.solution(1000000000, 1));      //
      //System.out.println(sol.solution(415633212, 234332));  //large numbers
      System.out.println(sol.solution(947853, 4453));  //large numbers      

   
   }
}
