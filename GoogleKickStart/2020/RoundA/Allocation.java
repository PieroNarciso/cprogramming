import java.util.Arrays;
import java.util.Scanner;

public class Solution 
{
    public static void function(int cant, int[] H)
    {
        int sum = 0;
        int num = 0;
        Arrays.sort(H);
        for (int i = 0; i < H.length; i++) 
        {
            if (sum + H[i]<=cant) 
            {
                num++;
                sum += H[i];
            }
            else break;
        }
        System.out.print(num);
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        int t = 0;
        while (cases-- >0)
        {
            t++;
            int[] datos = new int[2];
            for (int i = 0; i < 2; i++) 
            {
                datos[i] = sc.nextInt();
            }
            
            int[] Houses = new int[datos[0]];
            for (int i = 0; i < datos[0]; i++) 
            {
                Houses[i] = sc.nextInt();
            }
            System.out.print("Case #" + t + ": ");
            function(datos[1], Houses);
            System.out.print("\n");
        }
    }
}