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

        mobj.Transpose();
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void Transpose()
    {
        int Brr[][] = new int[3][3];
        int iTemp = 0;
        int i = 0, j = 0;
        for(i=0; i<Arr.length ; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                Brr[i][j] = Arr[j][i];
            }
        }

        System.out.println("Transpose of a matrix is :\n");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Brr[i][j]+"\t");
            }
            System.out.println();
        }

    }
}