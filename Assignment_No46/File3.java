
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

        System.out.println("The column wise addition of elements: ");
        mobj.AddColumns();

    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void AddColumns()
    {
        int iValue = 0, iCnt = 0;
        int i=0, j=0;
        int iRows = Arr.length;
        int iCols = Arr[0].length;

        //Columwise iteration
        for(i=0; i<iCols; i++)
        {
            iValue = 0;
            //Insisde columns row wise iteration
            for(j=0; j<iRows; j++)
            {
                    iValue = iValue + Arr[j][i];         
            }
            System.out.println("The sum of "+(i+1)+" th column "+iValue);
        }
    }
}