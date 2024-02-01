import java.util.*;
import LB.Matrix;

class File4
{
    public static void main(String[] arg)
    {
        boolean bRet = false;
        int iRow = 0, iCol = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        bRet =  mobj.ChkIdentity();

        if(bRet)
        {
            System.out.println("The given matrix is identity matrix.\n");
        }
        else
        {
            System.out.println("The given matrix is not an identity matrix.\n");
        }

    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int Rows, int Cols)
    {
        super(Rows,Cols);
    }

    public boolean ChkIdentity()
    {
        boolean bFlag = true;

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if((i==j) && (Arr[i][j] != 1))
                {
                    bFlag = false;
                    break;
                }
                else if((i !=j) && Arr[i][j] != 0)
                {
                    bFlag = false;
                    break;
                }
            }
        }
        return bFlag;
    }
} 