import java.io.*;
import java.util.*;

class File1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        int iRet = 0;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();
        
        StringDemo strObj = new StringDemo();

        iRet =  strObj.CountCapital(str);
        System.out.println("The count of capital letters is: "+ iRet);

        sobj.close();
    }
}

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0, iCapital = 0;
        char Arr[] = str.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCapital++;
            }
        }
        return iCapital;
    }
}

