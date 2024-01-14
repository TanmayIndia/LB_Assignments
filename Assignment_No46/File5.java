import java.util.*;
import LB.Matrix;

class File5
{
    public static void main(String[] args)
    {
        int iRow = 0, iCol = 0, iRet1 = 0, iRet2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.SwapRows();
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void SwapRows()
    {
        int i=0, j=0;
        int iCol = Arr[0].length , iRow = Arr.length;
       
        int iTemp = 0;

        for(i = 0; i <= iRow ; i++)
        {
            for(j = 0; j <= iCol ; j++)
            {
               iTemp  = Arr[i][j+1];
               Arr[i][j+1] = Arr[i][j];
               Arr[i][j] = iTemp;
            }
        }
    }
}