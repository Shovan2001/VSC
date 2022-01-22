import java.util.Scanner;
class prog1
{
    public static void main(String[] args) 
    {
        int n,k,f=0;    
        Scanner in=new Scanner(System.in);
        
        System.out.println("Enter no of elements\n");
        n=in.nextInt();
        int a[]=new int[n];

        System.out.println("\nEnter the elements\n");
        for(int i=0;i<n;i++)
        a[i]=in.nextInt();

        System.out.println("Enter the element to find");
        k=in.nextInt();

        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                System.out.println("Found");
                f=1;
                break;
            }
        }

        if(f==0)
        System.out.println("Not found");
        in.close();
    }    
}