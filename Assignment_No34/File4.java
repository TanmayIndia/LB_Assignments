import java.util.*;
import java.io.*;

class File4
{
    public static void main(String arg[])
    {
        int iNo = 0, iProd = 0;

        try
        {
            BufferedReader Input = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Please enter element");
            iNo = Integer.parseInt(Input.readLine());

            Digit dObj = new Digit();
            iProd = dObj.Multiply(iNo);

            System.out.println("The multiplication of all digits : "+ iProd);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Digit
{
    public int Multiply(int iValue)
    {
        int iDigit = 0, iMulti = 1;

        while(iValue != 0)
        {
           iDigit = iValue%10;
           if(iDigit != 0)
           {
             iMulti = iMulti*iDigit;
           }
           iValue = iValue/10;
        }
        return iMulti;
    }
}