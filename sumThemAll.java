// Sum Them All
// HackerRank sample problem
// 
// Problem: return sum of array?



import java.util.*;

class Solution {
   static int solution(int[] numbers) {
      int sum = 0;
      for (int i = 0; i < numbers.length; i++) {
         sum = sum + numbers[i];
      }

      return sum;
   }
   
   public static void main(String[] args) {
      Solution sol = new Solution();
      int[] A = {1, 2, 3, 4, 5};
      int[] B = {12, 12};
      System.out.println(sol.solution(A));
      System.out.println(sol.solution(B));

      
      
   }
 
   
}