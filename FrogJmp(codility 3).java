import java.util.*;

class Solution {
   public int solution (int X, int Y, int D) {
      int distance = Y - X;
      double jumps = 1.0 * distance / D ;
      //System.out.println(jumps);
      jumps = Math.ceil(jumps);
      //System.out.println(jumps);   
      int intJumps = (int) jumps;

      return intJumps;
   }


   public static void main (String[] args) {
      Solution sol = new Solution();
      int jumps = sol.solution(10, 85, 30);  
      System.out.println(jumps + " jumps to get there");
      
      jumps = sol.solution(5, 105, 3);  
      System.out.println(jumps + " jumps to get there");   
      
   }

}