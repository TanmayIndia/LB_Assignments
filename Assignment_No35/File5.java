import java.util.*;
import java.io.*;

class File5
{
    public static void main(String arg[])
    {
        int iCount = 0, iProd = 0;
        int iArr[];
        try
        {
        BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Please enter number of elements :");
        iCount = Integer.parseInt(Br.readLine());
        iArr = new int[iCount];
        System.out.println("Enter elements :");
            for(int iCnt = 0; iCnt < iCount; iCnt++)
            {
                iArr[iCnt] = Integer.parseInt(Br.readLine());
            }
        Number obj = new Number();
        iProd = obj.Product(iArr);
          System.out.println("The product of odd elements: " + iProd);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Number
{
    public int Product(int Arr[])
    {
        int iProd = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt]%2) != 0)
            {
                if(iProd>1)
                {
                    iProd = iProd*Arr[iCnt];
                }
                else
                {
                    iProd = Arr[iCnt];
                }
            }
        }
        return iProd;
    }

}

