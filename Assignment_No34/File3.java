import java.util.*;
import java.io.*;

class File3
{
    public static void main(String arg[])
    {
        int iNo = 0;

        try
        {
            BufferedReader Input = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Please enter element");
            iNo = Integer.parseInt(Input.readLine());

            Digit dObj = new Digit();

            System.out.println("The count of even digits: " + dObj.CountRange(iNo));
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Digit
{
    public int CountRange(int iValue)
    {
        int iDigit = 0, iCountRange = 0;
        while(iValue != 0)
        {
          iDigit = iValue % 10; 
        
            if(iDigit > 3 && iDigit < 7)
            {
                iCountRange++;
            }
          iValue = iValue/10;
        }
        return iCountRange;
    }
}