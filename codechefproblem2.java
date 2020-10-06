



/* https://www.codechef.com/OCT20B/problems/CHEFEZQ

codechef october long challange

Q no 2


 */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
	        Scanner sc=new Scanner(System.in);
	        int lop=sc.nextInt();
	        while(lop>0)
	        {
	            int size=sc.nextInt();
	            int arr[]=new int[size];
	            
	            int dailyworkdown=sc.nextInt();
	            int countday=0;
	            int carryover=0;
	            for(int i=0;i<size;i++)
	            {
	              arr[i]= sc.nextInt();
	             }
	          int left =0;
	            int i=0;
	            for(i=0;i<size;i++)
	            {
	               left=arr[i]+left;
	                    if(left>=dailyworkdown)
	                    {
	                        countday++;
	                        left=(left- dailyworkdown);
	                    }
	                
	                   else if(left<dailyworkdown)
	                       break;
	                    
	             }
	         if(i==size)
	         {
	             countday+=((left)/ dailyworkdown);
	               //System.out.println(countday+1);
	         }     
	        // else
	          System.out.println(countday+1);
	       
	                
            lop--;
	        }
	}
}
