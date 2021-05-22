
import java.util.Scanner;

/**
 *
 * @author javier
 */
public class Solution 
{
    
    public static int funcion(char[] S, int n, int k)
    {
        int value = 0;
        for (int i = 0; i < n/2; i++) 
        {
            value += (S[i] != S[n-i-1]) ? 1:0;
        }
        if (value>k) 
        {
            return value-k;
        }
        else if(value==k)
        {
            return 0;
        }
        else if(k>value)
        {
            return k-value;
        }
        return 0;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        int t = 0;
        while (cases-- >0) 
        {
            t++;
            int n = sc.nextInt();
            int k = sc.nextInt();
            char[] S = sc.next().toUpperCase().toCharArray();
            System.out.println("Case #" + t + ": " + funcion(S, n, k));
        }
    }
}