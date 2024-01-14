import java.util.*;
import LB.Matrix;

class File4
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

        iRet1 = mobj.StraightDiagonal();
        iRet2 = mobj.ReverseDiagonal();
        
        if(iRet1>iRet2)
            System.out.println("The lagest element of two diagonals :"+ iRet1);
        else
            System.out.println("The lagest element of two diagonals :"+ iRet2);

    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int StraightDiagonal()
    {
        int i=0, j=0;
        int iMax = Arr[0][0];

        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((i == j) && (iMax<Arr[i][j]))
                    iMax = Arr[i][j];
            }
        }
        return iMax;
    }

    public int ReverseDiagonal()
    {
        int i=0, j=0;
        int iMax = Arr[0][(Arr[0].length)-1];

        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(iMax < Arr[i][Arr[i].length-i -1])
                    iMax =  Arr[i][Arr[i].length-i -1];
            }
        }
        return iMax;
    }
}