import java.util.Scanner;
public class Nptel_Q5{
    public static void main(String[] args) {
	 Scanner input = new Scanner(System.in);
         double mark_avg;
         int result;
         int i;
         int s;//no of subjects
      //define size of array
       s = input.nextInt();
     //The array is defined "arr" and inserted marks into it of integer type.
      int[] arr = new int[s];  //To store subject no. 
      
	 for(i=0;i<arr.length;i++)
	  {
        	arr[i]=input.nextInt();
	  } 
     //Initialize maximum element as first element of the array.  
   //Traverse array elements to get the current max.
   //Store the highest mark in the variable result.
   //Store average mark in avgMarks.
       int temp=arr[0];
       result=arr[0];
       for(i=1;i<arr.length;i++){
              if(result<arr[i])
                  result=arr[i];
            temp+=arr[i];
          }
         mark_avg= temp/arr.length;
        System.out.println(result);
        System.out.print(mark_avg);
     }
   }
