
import java.util.*;
import LB.Matrix;

class File2
{
    public static void main(String[] args)
    {
        int iRow = 0, iCol = 0, iRet = 0, iNo = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Enter the number which user wants to search");
        iNo = sobj.nextInt();

        iRet = mobj.Count(iNo);

        System.out.println("The frequncy of " + iNo + " is: "+ iRet);
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Count(int iNo)
    {
        int iValue = 0;

        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                    iValue++;
            }
        }
        return iValue;
    }
}