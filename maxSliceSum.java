// A non-empty zero-indexed array A consisting of N integers is given. A pair of integers (P, Q), such that 0 <= P <= Q < N, is called a slice of array A. The sum of a slice (P, Q) is the total of A[P] + A[P+1] + ... + A[Q].
// 
// Write a function:
// 
// class Solution { public int solution(int[] A); }
// that, given an array A consisting of N integers, returns the maximum sum of any slice of A.
// 
// For example, given array A such that:
// 
// A[0] = 3  A[1] = 2  A[2] = -6
// A[3] = 4  A[4] = 0
// the function should return 5 because:
// 
// (3, 4) is a slice of A that has sum 4,
// (2, 2) is a slice of A that has sum -6,
// (0, 1) is a slice of A that has sum 5,
// no other slice of A has sum greater than (0, 1).
// Assume that:
// 
// N is an integer within the range [1..1,000,000];
// each element of array A is an integer within the range [-1,000,000..1,000,000];
// the result will be an integer within the range [-2,147,483,648..2,147,483,647].
// Complexity:
// 
// expected worst-case time complexity is O(N);
// expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
// Elements of input arrays can be modified.

import java.util.*;

class Solution {
   public int solution(int[] A) {
      
      int maxSlice = A[0];
      int currentSlice = 0;
      int indexCount = 0;
      
     
      for (int i = 0; i < A.length; i++) {
         if (currentSlice + A[i] >= currentSlice || indexCount < 1) {
            currentSlice = currentSlice + A[i];
            indexCount++;
            if (i >=1 &&  currentSlice - A[i-1] > currentSlice) {
               currentSlice = currentSlice - A[i-1];
               indexCount--;
            }            
         }
         else {
            currentSlice = A[i];
            indexCount = 1;
         }
         
         
         if (currentSlice > maxSlice) {
            maxSlice = currentSlice;
         }
               
         System.out.println("currentSlice: " + currentSlice);
         //System.out.println("maxSlice: " + maxSlice);
      }
            
      return maxSlice; 
   }
    
    
   public static void main(String[] args) {
   
      Solution sol = new Solution();   
      
      //test cases  
      int[] A = {3, 2, -6, 4, 0};
      int[] B = {3, 2, -6, 4, 0, 4};
      int[] C = {-3, 2, 6, 4, 0};
      int[] D = {-3, 2, 6, 4, 0, -13, 1, 100};
      int[] E = {-10};
      int[] F = {-10, -5, -1};
      int[] G = {-2, 1};
      System.out.println(sol.solution(A));
      System.out.println(sol.solution(B));      
      System.out.println(sol.solution(C));
      System.out.println(sol.solution(D));   
      System.out.println(sol.solution(E));
      System.out.println(sol.solution(F));
      System.out.println(sol.solution(G));      
   }
}