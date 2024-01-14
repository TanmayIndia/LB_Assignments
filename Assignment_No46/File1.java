
import java.util.*;
import LB.Matrix;

class File1
{
    public static void main(String[] args)
    {
        int iRow = 0, iCol = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.AddDiagonal();

        System.out.println("The sum of diagonal elements of a Matrix is: "+ iRet);
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int AddDiagonal()
    {
        int iValue = 0;

        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i].length; j++)
            {
                if(i==j)
                    iValue = iValue+Arr[i][j];
            }
        }
        return iValue;
    }
}