import java.util.*;
import java.io.*;

class File5
{
    public static void main(String arg[])
    {
        int iNo = 0, iDiff = 0;

        try
        {
            BufferedReader Input = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Please enter element");
            iNo = Integer.parseInt(Input.readLine());

            Digit dObj = new Digit();
            iDiff = dObj.CountDiff(iNo);

            System.out.println("The Difference between even digits and odd digis : "+ iDiff);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Digit
{
    public int CountDiff(int iValue)
    {
        int iDigit = 0, iEvnSum = 0, iOddSum = 0;

        while(iValue != 0)
        {
           iDigit = iValue%10;
           if((iDigit%2)  == 0)
           {
             iEvnSum = iEvnSum + iDigit;
           }
           else
           {
            iOddSum = iOddSum + iDigit;
           }
           iValue = iValue/10;
        }
        return iEvnSum-iOddSum;
    }
}