package Practice;
import java.util.*;

public class bomb {
	public static int largest(int n,int[] x) 
	{
		int max=x[0];
		for(int i=0;i<n;i++)
		{
			if(x[i]>max)
				max=x[i];
		}
		return max;
	}

	public static void main(String[] args) {
		int count=1;
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		int b=s.nextInt();
		int x[]=new int[10];
		for(int i=0;i<a;i++) 
		{
		  x[i]=s.nextInt();
		}
		int w=largest(a,x);
			if((b*2)>=w)
			{
				System.out.println(count);
			}
			else
			{
			int z=w/(b*2);
			count+=z;
			System.out.println(count);
			}		
		s.close();

	}

}
