import java.io.*;
import java.util.*;

class File2
{
    public static void main(String arg[])
    {
        String FirstString, SecondString;
        boolean bRet = false;
    
        try
        {
            BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter First String: ");
            FirstString = Br.readLine();
            System.out.println("Enter First String: ");
            SecondString = Br.readLine();
           
            StringDemo obj = new StringDemo();
            bRet = obj.strCmpX(FirstString,SecondString);
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
    public boolean strCmpX(String src, String dest)
    {
        int iLength1 = 0, iLength2 = 0;
        boolean bFlag = true;

        iLength1 = src.length();
        iLength2 = dest.length();

        if(iLength1 != iLength2)
        {
            return false;
        }
        else
        {
            char[] srcArr = src.toCharArray();
            char[] destArr = dest.toCharArray();

            for(int i = 0; i<iLength1; i++)
            {       
                if(srcArr[i] != destArr[i])
                {
                    bFlag = false;
                    break;
                }
            }
        }
        return bFlag;
    }
}