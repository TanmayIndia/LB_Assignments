import java.io.*;
import java.util.*;

class File1
{
    public static void main(String arg[])
    {
        String FirstString, SecondString, sRet;
        int iNoChar = 0;

        try
        {
            BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter First String: ");
            FirstString = Br.readLine();
            System.out.println("Enter First String: ");
            SecondString = Br.readLine();
            System.out.println("Enter number of characters to concat: ");
            iNoChar = Integer.parseInt(Br.readLine());
            StringDemo obj = new StringDemo();
            sRet = obj.strNCatX(FirstString,SecondString,iNoChar);
            System.out.println("The string after concatenation is :"+ sRet);
        }
        catch(Exception eobj)
        {   
            System.out.println(eobj);
        }
    }
}
class StringDemo
{
    public String strNCatX(String src, String dest, int iSize)
    {
        char[] chArr = dest.toCharArray();
        char[] tempArr = new char[dest.length()];

        int iLimit = 0;

        if(iSize>dest.length())
        {
            iLimit = dest.length();
        }
        else
        {
            iLimit = iSize;
        }
        
        for(int i = 0; i < iLimit; i++)
        {
            tempArr[i] = chArr[i];
        }

        String temp = new String(tempArr);

        return src.concat(" ").concat(temp);
    }
}