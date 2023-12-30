import java.util.*;
import java.io.*;

class File1
{
    public static void main(String arg[])
    {
        int iSize = 0, iCnt = 0;

        BufferedReader Input = new BufferedReader( new InputStreamReader(System.in));
        System.out.println("Please enter size of array");
        try
        {
        iSize = Integer.parseInt(Input.readLine());

        int iArr[] = new int[iSize];

        System.out.println("Please enter elements");

        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            iArr[iCnt] = Integer.parseInt(Input.readLine());
        }

        ArrayDemo aObj = new ArrayDemo();

        System.out.println("The difference betweeen even and odd: "+ aObj.Difference(iArr)); 

        }
        catch(IOException obj)
        {
            System.out.println(obj);
        }
    }
}

class ArrayDemo
{
    public int Difference(int iArray[])
    {
        int iSumOdd = 0, iSumEven = 0, iCnt = 0;

        for(iCnt = 0; iCnt < iArray.length; iCnt++)
        {
            if(iArray[iCnt] % 2 == 0)
            {
                iSumEven = iArray[iCnt];
            }
            else
            {
                iSumOdd = iArray[iCnt];
            }
        }

        if(iSumEven>iSumOdd)
        {
            return iSumEven - iSumOdd;
        }
        else
        {
            return iSumOdd - iSumEven;
        }
    }
}