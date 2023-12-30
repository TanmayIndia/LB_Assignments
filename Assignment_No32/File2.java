import java.io.*;
import java.util.*;

class File2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter String: ");
        str = sobj.nextLine();

        StringDemo strDemo = new StringDemo();

        System.out.println("The count of small letters is: "+ strDemo.CountSmall(str)); 
        sobj.close();
    }
}

class StringDemo
{
    public int CountSmall(String str)
    {
        int iSmall = 0, iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iSmall++;
            }
        }
        return iSmall;
    }
}

