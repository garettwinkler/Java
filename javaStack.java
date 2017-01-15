// HackerRank problem
// Java Stack
// Input from input file stdin

// A string containing only parentheses is balanced if the following is true: 1. if it is an empty string 2. if A and B are correct, AB is correct, 3. if A is correct, (A) and {A} and [A] are also correct.
// 
// Examples of some correctly balanced strings are: "{}()", "[{()}]", "({()})" 
// 
// Examples of some unbalanced strings are: "{}(", "({)}", "[[", "}{" etc.
// 
// Given a string, determine if it is balanced or not.
// 
// Input Format
// 
// There will be multiple lines in the input file, each having a single non-empty string. You should read input till end-of-file.
// 
// The part of the code that handles input operation is already provided in the editor.
// 
// Output Format
// 
// For each case, print 'true' if the string is balanced, 'false' otherwise.
// 
// Sample Input
// 
// {}()
// ({()})
// {}(
// []
// Sample Output
// 
// true
// true
// false
// true

import java.util.*;
class Solution{
    
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
   
   public static void main(String []argh)
   {
      Scanner sc = new Scanner(System.in);
      Solution sol = new Solution();
      while (sc.hasNext()) {
          String input=sc.next();
          if (sol.solution(input) == 1) {
              System.out.println("true");
          }
          else 
              System.out.println("false");
          
          
      }   
   }
}
