package ExpPra;
import java.util.*;

public class ARRAY2D {
	public void displayAry2d(int n, int m, int[][] myAry)
	{
		System.out.println("The array is: ");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				System.out.print(myAry[i][j]+" ");
			}
			System.out.println();
		}
	}

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the number of row: ");
		int n=s.nextInt();
		System.out.print("Enter the number of row: ");
		int m=s.nextInt();
		int myAry[][]=new int [n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				myAry[i][j]=s.nextInt();
			}
		}
		ARRAY2D a=new ARRAY2D();
		a.displayAry2d(n,m,myAry);
		s.close();
	}

}
