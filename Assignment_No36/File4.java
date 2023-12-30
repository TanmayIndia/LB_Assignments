import java.io.*;
import java.util.*;

class File3
{
    public static void main(String arg[])
    {
        String UserString, Ret;
        try
        {
            BufferedReader Br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter First String: ");
            UserString = Br.readLine();
            StringDemo obj = new StringDemo();
            Ret = obj.strRevTogX(UserString);
            System.out.println(Ret);
        }
        catch(Exception eobj)
        {   
            System.out.println(eobj);
        }
    }
}
class StringDemo
{
    public String strRevTogX(String str)
    {
        char[] charArray = str.toCharArray();
        char[] RevArray = new char[100];
        String RevString;
        int iCnt = 0;
        
       for(iCnt=str.length()-1; iCnt>=0; iCnt--)
       {
         RevArray[iCnt] = charArray[iCnt];
       }

        for(iCnt=0; iCnt<str.length(); iCnt++)
       {
        if((RevArray[iCnt] >= 'A') && (RevArray[iCnt] <= 'Z'))
        {
            //RevArray[iCnt] = Character.toLowerCase(RevArray[iCnt]);
            RevArray[iCnt] = (char)(RevArray[iCnt]+32);
        }
        else if((RevArray[iCnt] >= 'a') && (RevArray[iCnt] <= 'z'))
         {   
           // RevArray[iCnt] = Character.toUpperCase(RevArray[iCnt]);
            RevArray[iCnt] = (char)(RevArray[iCnt]-32);
         }
       }
        RevString = new String(RevArray);
        return RevString;
    }
}