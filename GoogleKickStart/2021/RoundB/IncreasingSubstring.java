public class Solution 
{
    public static void Algoritmo(int n, char[] S)
    {
        int inicio = 0;
        int tam;
        for (int i = 0; i < n; i++) 
        {
            tam = 1;
            
            for (int j = inicio; j < i; j++) 
            {
                //ADBD
                if (S[j]<S[j+1]) tam++;
            }
            try {
                if (S[i] >= S[i+1]) 
                {
                    inicio = i+1;
                }
            }
            catch (Exception ex) {}
            finally
            {
                System.out.print(tam + " ");
            }
        }
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        int t = 0;
        while (cases-- > 0) 
        {
            t++;
            int n = sc.nextInt();
            char[] S = sc.next().toCharArray();
            System.out.print("Case #" + t + ": ");
            Algoritmo(n, S);
            System.out.println("");
        }
    }
}