// A non-empty zero-indexed array A consisting of N numbers is given. The array is sorted in non-decreasing order. The absolute distinct count of this array is the number of distinct absolute values among the elements of the array.
// 
// For example, consider array A such that:
// 
//   A[0] = -5
//   A[1] = -3
//   A[2] = -1
//   A[3] =  0
//   A[4] =  3
//   A[5] =  6
// The absolute distinct count of this array is 5, because there are 5 distinct absolute values among the elements of this array, namely 0, 1, 3, 5 and 6.
// 
// Write a function:
// 
// class Solution { public int solution(int[] A); }
// 
// that, given a non-empty zero-indexed array A consisting of N numbers, returns absolute distinct count of array A.
// 
// For example, given array A such that:
// 
//   A[0] = -5
//   A[1] = -3
//   A[2] = -1
//   A[3] =  0
//   A[4] =  3
//   A[5] =  6
// the function should return 5, as explained above.
// 
// Assume that:
// 
// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range [-2,147,483,648..2,147,483,647];
// array A is sorted in non-decreasing order.
// Complexity:
// 
// expected worst-case time complexity is O(N);
// expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
// Elements of input arrays can be modified.

import java.util.*;

class Solution {
   
   public int solution(int[] A) {
      int distinct = 0;
      
// cheating method (using extra array), fails when extreme high/low ints used eg Integer.MAX_VALUE. 92%
//       int[] B = new int[10000000];
//       for (int i = 0; i < A.length; i++) {
//          if (B[Math.abs(A[i])] == 0) {
//             distinct++;
//             B[Math.abs(A[i])] = 1;
//          }
//       }

      int min = 0;
      int max = A.length-1;
      int currentValue;
      int lastValue = 0;
      while (min <= max) {
         if ( Math.abs(A[min]) > Math.abs(A[max]) ) {
            currentValue = Math.abs(A[min]);
            min++;
         }
         else if ( Math.abs(A[min]) < Math.abs(A[max]) ) {
            currentValue = Math.abs(A[max]);
            max--;
            if (A[min] == Integer.MIN_VALUE) {     // probably a better way to handle this case
               currentValue = A[min];              // -2147483648
               max++;
               min++;
            }                         
         }
         else {
            currentValue = Math.abs(A[max]);         
            min++;
            max--;
         }
        
         if (lastValue != currentValue) {
            distinct++;
         }
         
         lastValue = currentValue;
      }
      
      //to handle edge case of only 0's. Would fail b/c lastValue is initialized to 0 and would never count      
      if (distinct == 0 && A.length > 0) {
         return 1;       
      }
      return distinct;
   }
   
   public static void main (String[] args) {
      //test cases
      Solution sol = new Solution();
//       System.out.println("abs of -2147483648: " + Math.abs(-2147483648));
//       System.out.println("abs of -2147483647: " + Math.abs(-2147483647));      
      
      int[] A = {-5, -3, -1, 0, 3, 6}; // 5
      int[] B = {-5, -3, -1, 0, 1};    // 4
      int[] C = {};              // 0
      int[] D = {1,1,1,1,1};     // 1 
      int[] E = {-2,-1,0,1,1,2}; // 3
      int[] F = {0,1}; // 2
      int[] G = {0,0}; // 1
      int[] H = {-2147483648,0}; // 2
      int[] I = {-2147483648, -2147483648, -2147483648, -2147483648, 0}; // 2
      System.out.println(sol.solution(A));
      System.out.println(sol.solution(B));
      System.out.println(sol.solution(C));
      System.out.println(sol.solution(D));
      System.out.println(sol.solution(E));
      System.out.println(sol.solution(F));      
      System.out.println(sol.solution(G));            
      System.out.println(sol.solution(H));      
      System.out.println(sol.solution(I));      
   }

}
