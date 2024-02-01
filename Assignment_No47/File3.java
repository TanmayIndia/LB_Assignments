import java.util.*;
import LB.Matrix;

class File3
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
        int Brr[][] = new int[Arr.length][Arr.length];
        int iTemp = 0;
        int i = 0, j = 0;
        for(i=0; i<Arr.length ; i++)
        {
            for(j=0; j<Arr[i].length ; j++)
            {
                Brr[j][i] = Arr[(Arr[i].length-1)-j][i];
            }
        }

        System.out.println("Transpose of a matrix is : ");
        for(i = 0; i < Brr.length; i++)
        {
            for(j = 0; j < Brr[i].length; j++)
            {
                System.out.print(Brr[i][j]+"\t");
            }
            System.out.println();
        }

    }
}