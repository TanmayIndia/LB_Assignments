import java.io.*;
import java.util.*;

class File3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter String: ");
        str = sobj.nextLine();

        StringDemo strDemo = new StringDemo();

        strDemo.Reverse(str);
        sobj.close();
    }
}

class StringDemo
{
    public void Reverse(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
    
        try
        {
            for(iCnt=(Arr.length-1); iCnt>=0; iCnt--)
            {
                System.out.print(Arr[iCnt]);
            }
            System.out.println();
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}