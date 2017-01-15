// Staircase
// HackerRank sample problem
// 
// Problem: You have to complete the given function StairCase which takes an integer n, the height of the staircase as its argument and prints a staircase as shown in the example.


import java.util.*;

class Solution {
   static void solution(int n) {
      for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= n-i; j++) {
            System.out.print(" ");         
         }
         for (int k = 1; k <= i; k++) {
            System.out.print("#");
         }
         System.out.println();
      }

   }
   
   public static void main(String[] args) {
      Solution sol = new Solution();
      sol.solution(6);
      sol.solution(0);
      sol.solution(1);
      sol.solution(100);
      
      
   }
 
   
}