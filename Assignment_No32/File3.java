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

        System.out.println("The difference between capital letters and small letters is: "+ strDemo.CountDiff(str)); 
        sobj.close();
    }
}

class StringDemo
{
    public int CountDiff(String str)
    {
        int iSmall = 0, iCapital = 0, iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iSmall++;
            }
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCapital++;
            }
        }
        if(iSmall>iCapital)
        {
            return (iSmall-iCapital);
        }
        else
        {
            return (iCapital-iSmall);
        }
    }
}

