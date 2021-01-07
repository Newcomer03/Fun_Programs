/*****************************************************************
 INSCRIBED BOXES
 CODED BY :- CHIRAG GHOSH
 ....another one of my pattern codes.
 Enter a single digit number
 default value -> 5  [used incase input out of range or IO error]
 ******************************************************************/
import java.util.*;
class inscribed_boxes
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a single digit number :");
        int x=5;
        try
        {
            x=sc.nextInt();
        }
        catch(Exception e)
        {
            System.out.println("IO error. default value 5 used");
        }
        if(x<1||x>9)
        {
            System.out.println("input out of range.default value 5 used");
            x=5;
        }
        int y=2*x-1;
        for(int i=1;i<=x;i++,y-=2)
        {
        for(int j=1;j<i;j++)
         System.out.print(j);
        for(int k=y;k>=1;k--)
        System.out.print(i);
        for(int l=i-1;l>=1;l--)
        System.out.print(l);
        System.out.println();
    }
    //----------------------------------------------------------------------------------
    y+=2;
     for(int i=x;i>=1;i--,y+=2)
        {
        for(int j=1;j<i;j++)
         System.out.print(j);
        for(int k=1;k<=y;k++)
        System.out.print(i);
        for(int l=i-1;l>=1;l--)
        System.out.print(l);
        System.out.println();
    }
}
}
