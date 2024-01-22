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
        System.out.println("\nAfter swap : ");
        mobj.Display();      
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
        int i=0;
        int iSize = Arr[0].length;
        int[] iTemp= new int[iSize]; 

        for(i=0; i<= (iSize) ; i++)
        {
           
            System.out.println("row "+ (1+i));
                iTemp =  Arr[i];
                Arr[i] =  Arr[iSize-1-(i)];
                Arr[iSize-1-(i)] = iTemp;
            
        }

        // iTemp = Arr[0];
        // Arr[0] = Arr[1];
        // Arr[1] = iTemp;
    }
}




















