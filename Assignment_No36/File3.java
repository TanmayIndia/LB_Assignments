import java.io.*;
import java.util.*;

class File3
{
    public static void main(String arg[])
    {
        String FirstString, SecondString;
        boolean bRet = false;
        int iNoChar = 0;

        try
        {
            BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter First String: ");
            FirstString = Br.readLine();
            System.out.println("Enter First String: ");
            SecondString = Br.readLine();
            System.out.println("Enter number of characters to check : ");
            iNoChar = Integer.parseInt(Br.readLine());
            StringDemo obj = new StringDemo();
            bRet = obj.strCmpX(FirstString,SecondString, iNoChar);
            System.out.println(bRet);
        }
        catch(Exception eobj)
        {   
            System.out.println(eobj);
        }
    }
}
class StringDemo
{
    public boolean strCmpX(String src, String dest, int iSize)
    {
        boolean bFlag = true;

        char[] srcArr = src.toCharArray();
        char[] destArr = dest.toCharArray();
        
        int iLimit = 0;

        if(iSize>dest.length())
        {
            iLimit = dest.length();
        }
        else
        {
            iLimit = iSize;
        }

        for(int i = 0; i<iLimit; i++)
        {       
            if(srcArr[i] != destArr[i])
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }
}