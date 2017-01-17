import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int[] A = new int[3];
        int[] B = new int[3];
        A[0] = in.nextInt();
        A[1] = in.nextInt(); 
        A[2] = in.nextInt();
        B[0] = in.nextInt();
        B[1] = in.nextInt();
        B[2] = in.nextInt();

        int aScore = 0;
        int bScore = 0;        
        
        for (int i = 0; i < A.length; i++) {
            if (A[i] > B[i]) {
                aScore++;
            }
            else if (A[i] < B[i]) {
                bScore++;
            }

        }
        System.out.print(aScore + " " + bScore);


        
        
    }
}
