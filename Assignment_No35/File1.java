import java.util.*;
import java.io.*;

class File1
{
    public static void main(String arg[])
    {
        int iCount = 0, iValue = 0;
        int iArr[];
        boolean bRet = false;
        try
        {
        BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Please enter number of elements : \n");
        iCount = Integer.parseInt(Br.readLine());
        iArr = new int[iCount];
        System.out.println("Enter elements :");
            for(int iCnt = 0; iCnt < iCount; iCnt++)
            {
                iArr[iCnt] = Integer.parseInt(Br.readLine());
            }
        System.out.println("Enter number to check:");
        iValue = Integer.parseInt(Br.readLine());
        Number obj = new Number();
        bRet = obj.Check(iArr,iValue);
        System.out.println("Given number present in the list: "+ bRet);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Number
{
    boolean Check(int Arr[], int iNo)
    {
        boolean bFlag = false;
        for(int iCnt = 0 ; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlag = true;
            }
        }
     return bFlag;
    }
}

