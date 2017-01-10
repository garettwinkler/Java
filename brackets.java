// A string S consisting of N characters is considered to be properly nested if any of the following conditions is true:
// 
// S is empty;
// S has the form "(U)" or "[U]" or "{U}" where U is a properly nested string;
// S has the form "VW" where V and W are properly nested strings.
// For example, the string "{[()()]}" is properly nested but "([)()]" is not.
// 
// Write a function:
// 
// class Solution { public int solution(String S); }
// that, given a string S consisting of N characters, returns 1 if S is properly nested and 0 otherwise.
// 
// For example, given S = "{[()()]}", the function should return 1 and given S = "([)()]", the function should return 0, as explained above.
// 
// Assume that:
// 
// N is an integer within the range [0..200,000];
// string S consists only of the following characters: "(", "{", "[", "]", "}" and/or ")".
// Complexity:
// 
// expected worst-case time complexity is O(N);
// expected worst-case space complexity is O(N) (not counting the storage required for input arguments).


import java.util.*;

class Solution {
   public int solution(String S) {
      
      int nested = 1;
      
      if (S.length() == 0) return nested;      
      
      //pseudo stack
      int[] bracketStack = new int [S.length()];
      int index = 0;
      
      for (int i = 0; i < S.length(); i++) {
         if (S.charAt(i) == '(') {
            bracketStack[index] = 1;
            index++;
         }
         else if (S.charAt(i) == '{') {
            bracketStack[index] = 2;
            index++;            
         }
         else if (S.charAt(i) == '[') {
            bracketStack[index] = 3;
            index++;            
         }         
         else if (S.charAt(i) == ')') {
            if (index == 0 || bracketStack[index - 1] != 1) {
               return 0;
            }
            else {
               bracketStack[index - 1] = 0;
               index--;
            }
         }
         else if (S.charAt(i) == '}') {
            if (index == 0 || bracketStack[index - 1] != 2) {
               return 0;
            }
            else {
               bracketStack[index - 1] = 0;
               index--;
            }                    
         }
         else if (S.charAt(i) == ']') {
            if (index == 0 || bracketStack[index - 1] != 3) {
               return 0;
            }
            else {
               bracketStack[index - 1] = 0;
               index--;
            }                            
         }           
         //System.out.println(Arrays.toString(bracketStack));
      }
      
      if (bracketStack[0] != 0) nested = 0;
            
      return nested; 
   }
    
    
   public static void main(String[] args) {
   
      Solution sol = new Solution();       
   
      //test cases   
      String A = "{[()()]}";
      String B = "([)()]";
      String C = "[[[{{{}}}]]]()()]";
      String D = "{[([][][((()))])()]}";      
      String E = "";
      
     
      System.out.println(sol.solution(A));
      System.out.println(sol.solution(B));      
      System.out.println(sol.solution(C));                                 
      System.out.println(sol.solution(D));      
      System.out.println(sol.solution(E));      
   }
}

