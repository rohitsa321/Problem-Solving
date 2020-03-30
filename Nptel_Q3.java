import java.util.Scanner;
public class Nptel_Q3 {
       public static void main(String[] args) {
	   Scanner sc = new Scanner(System.in);
	   int n=sc.nextInt();
	   int sum=0;
     //Use for or while loop do the operation
       int count=0;
       while(count<n){
            if((2*count)%3==0)
                  sum=sum+2*count;
         
          count++;
      }
      System.out.print(sum);
       }
}
