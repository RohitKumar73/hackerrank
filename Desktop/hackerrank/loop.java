import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int i=1,result;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
      
        for(i=1;i<=10;i++){
              result= n *i;
            System.out.println(n + " x " + i + " = " + result);
            
        }
    }
}
