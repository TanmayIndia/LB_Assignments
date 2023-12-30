import java.io.*;
import java.util.*;

class File3
{
    public static void main(String args[])
    {
        boolean bFlag = false;
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter String: ");
        str = sobj.nextLine();

        StringDemo strDemo = new StringDemo();

        bFlag = strDemo.CheckVowel(str);

        if(bFlag)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
        sobj.close();
    }
}

class StringDemo
{
    public boolean CheckVowel(String str)
    {
        boolean bFlag = false;
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'U') || (Arr[iCnt] == 'u'))
            {
               bFlag = true;
            }
        }
       return bFlag;
    }
}

