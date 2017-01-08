// A zero-indexed array A consisting of N integers is given. The dominator of array A is the value that occurs in more than half of the elements of A.
// 
// For example, consider array A such that
// 
//  A[0] = 3    A[1] = 4    A[2] =  3
//  A[3] = 2    A[4] = 3    A[5] = -1
//  A[6] = 3    A[7] = 3
// The dominator of A is 3 because it occurs in 5 out of 8 elements of A (namely in those with indices 0, 2, 4, 6 and 7) and 5 is more than a half of 8.
// 
// Write a function
// 
// class Solution { public int solution(int[] A); }
// that, given a zero-indexed array A consisting of N integers, returns index of any element of array A in which the dominator of A occurs. The function should return -1 if array A does not have a dominator.
// 
// Assume that:
// 
// N is an integer within the range [0..100,000];
// each element of array A is an integer within the range [-2,147,483,648..2,147,483,647].
// For example, given array A such that
// 
//  A[0] = 3    A[1] = 4    A[2] =  3
//  A[3] = 2    A[4] = 3    A[5] = -1
//  A[6] = 3    A[7] = 3
// the function may return 0, 2, 4, 6 or 7, as explained above.
// 
// Complexity:
// 
// expected worst-case time complexity is O(N);
// expected worst-case space complexity is O(1), beyond input storage (not counting the storage required for input arguments).
// Elements of input arrays can be modified.


import java.util.*;

class Solution {
   public int solution(int[] A) {
      
      if (A.length == 0) return -1;
   
      int[] B = new int[A.length];
      for (int k = 0; k < A.length; k++) {
         B[k] = A[k];
      }
      System.out.println("B: " + Arrays.toString(B));   
      Arrays.sort(A);
      System.out.println(Arrays.toString(A));
      int moreThanHalf = A.length/2 + 1;
      //int half = (int)Math.ceil(A.length/2.0);
      int currentElement = A[0];
      int newElement;
      int count = 0;
      for (int i = 0; i < A.length; i++) {
         newElement = A[i];
         if (newElement == currentElement) {
            count++;
            if (count == moreThanHalf) {
               for (int j = 0; j < B.length; j++) {
                  if (B[j] == newElement) {
                     return j;
                  }
               }
            }
         }
         else {
            count = 1;
         }
         currentElement = newElement;
      }
      return -1;  
   }
    
    
   public static void main(String[] args) {
   
      //test cases   

      Solution sol = new Solution();    
   
      int[] A = {3, 4, 3, 2, 3, -1, 3, 3};
      int[] B = {3, 4, 3, 2, 3, 3, 3};            
      int[] C = {-1, 3, 3, -1, 3, 3, 3};            
      int[] D = {};
                  
      int dominator = sol.solution(A);
      System.out.println(dominator);

      dominator = sol.solution(B);
      System.out.println(dominator);

      dominator = sol.solution(C);
      System.out.println(dominator);            

      dominator = sol.solution(D);
      System.out.println(dominator);                                  
   }
}

