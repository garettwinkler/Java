import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {
    /*
 * Complete the function below.
 */

    static int minNum(int A, int K, int P) {
        if (K <= A) {
            return -1;
        }
        int days = 1;
        int Asha = A + P;
        int Kelly = K;
        while (Asha >= Kelly) {
            Asha = Asha + A;
            Kelly = Kelly + K;
            days++;
        }
        
        return days;

    }

public static void main(String[] args) throws IOException{
        Scanner in = new Scanner(System.in);
        final String fileName = System.getenv("OUTPUT_PATH");
        BufferedWriter bw = new BufferedWriter(new FileWriter(fileName));
        int res;
        int _A;
        _A = Integer.parseInt(in.nextLine().trim());
        
        int _K;
        _K = Integer.parseInt(in.nextLine().trim());
        
        int _P;
        _P = Integer.parseInt(in.nextLine().trim());
        
        res = minNum(_A, _K, _P);
        bw.write(String.valueOf(res));
        bw.newLine();
        
        bw.close();
    }
}