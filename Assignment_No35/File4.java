import java.util.*;
import java.io.*;

class File4
{
    public static void main(String arg[])
    {
        int iCount = 0, iStart = 0, iEnd = 0;
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
        System.out.println("Enter starting range:");
        iStart = Integer.parseInt(Br.readLine());
        System.out.println("Enter ending range:");
        iEnd = Integer.parseInt(Br.readLine());
        Number obj = new Number();
        obj.Display(iArr,iStart,iEnd);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Number
{
    public void Display(int Arr[], int iStart, int iFinish)
    {
        System.out.println("Elements between "+ iStart +" and "+iFinish);
        
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
           if(Arr[iCnt]> iStart && Arr[iCnt] < iFinish)
           {
            System.out.println(Arr[iCnt]);
           }
        }
    }

}

