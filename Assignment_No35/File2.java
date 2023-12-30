import java.util.*;
import java.io.*;

class File2
{
    public static void main(String arg[])
    {
        int iCount = 0, iValue = 0;
        int iArr[];
        int iRet = 0;
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
        System.out.println("Enter number to check:");
        iValue = Integer.parseInt(Br.readLine());
        Number obj = new Number();
        iRet = obj.FirstOcc(iArr,iValue);
        System.out.println("The index of given number is : "+ iRet);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}

class Number
{
    public int FirstOcc(int Arr[], int iNo)
    {
        int iRank = -1;
        
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iRank = iCnt+1;
                break;
            }
        }
        return iRank;
    }

}

