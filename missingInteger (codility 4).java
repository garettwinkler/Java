// Write a function:
// 
// class Solution { public int solution(int[] A); }
// that, given a non-empty zero-indexed array A of N integers, returns the minimal positive integer (greater than 0) that does not occur in A.
// 
// For example, given:
// 
//   A[0] = 1
//   A[1] = 3
//   A[2] = 6
//   A[3] = 4
//   A[4] = 1
//   A[5] = 2
// the function should return 5.
// 
// Assume that:
// 
// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range
// Complexity:
// 
// expected worst-case time complexity is O(N);
// expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
// Elements of input arrays can be modified.
// Copyright 2009–2016 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.

import java.util.*;

class Solution {

   public int solution(int[] A) {
      
      Arrays.sort(A);
      System.out.println(Arrays.toString(A));
      
      int j = 1;      
      int i = 0;
      while (i < A.length) {
         if (A[i] < j) {
            i++;
         }
         else if (A[i] == j) {
            j++;
            i++;
         }
         else {
            return j;
         }
      }   
   
      return j;
   }
   
   
   public static void main(String[] args) {
      int[] A = {1,3,6,4,1,2};
      Solution sol = new Solution();
      System.out.println(sol.solution(A));

      int[] B = {1};
      System.out.println(sol.solution(B));
      
      
      int[] C = {-100,1,2, -4};
      System.out.println(sol.solution(C));      
   
   }


}