import java.util.*;
import LB.Matrix;

class File5
{
    public static void main(String[] arg)
    {
        int iRow = 0, iCol = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of colums");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        bRet = mobj.ChkSparse(iRow,iCol);

        if(bRet != true)
            System.out.println("The given matrix is not a Sparse matrix.");
        else
             System.out.println("The given matrix is Sparse matrix.");
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public boolean ChkSparse(int iRow , int iCol)
    {
        int NoElements = iRow*iCol, iCountZero = 0;

        for(int i = 0; i<iRow; i++)
        {
            for(int j=0; j<iCol; j++)
            {
                if(Arr[i][j]== 0)
                    iCountZero++;
            }
        }

        if(iCountZero > (NoElements-iCountZero))
            return true;
        else
            return false;
    }
}