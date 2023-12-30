import java.io.*;
import java.util.*;

class File3
{
    public static void main(String arg[])
    {
        String UserString;
        boolean bRet = false;

        try
        {
            BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter First String: ");
            UserString = Br.readLine();
            StringDemo obj = new StringDemo();
            
            bRet = obj.strPalindrome(UserString);
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
    public boolean strPalindrome(String src)
    {
        boolean bFlag = true;
        char[] srcArr = src.toCharArray();
        
        for(int i = 0; i<src.length(); i++)
        {       
            if(Character.toUpperCase(srcArr[i]) != Character.toUpperCase(srcArr[src.length()-i-1]))
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }
}