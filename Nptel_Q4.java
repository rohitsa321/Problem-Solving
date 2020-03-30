import java.util.Scanner;
public class Nptel_Q4 {
    public static void main(String[] args) {
	         Scanner sc = new Scanner(System.in);
	         int n=sc.nextInt();
           int result=0;
           //Use while loop check the number is Armstrong or not.
           //store the output(1 or 0) in result variable.
           int check=n;
           int temp1=1; //TO calculate power
           int temp=n;
           int sum=0;
           int count=0;
          while(temp>0){   //Thi loop is for count number of digits in the given number
              temp=temp/10;
              count++;
               }
        temp=n;      
        while(temp>0){   
           temp=temp%10;
           temp1=1;
       for(int i=1;i<=count;i++){
               temp1=temp1*temp;
                }
          sum=sum+temp1;
         n=n/10; 
         temp=n;
        }
      if(sum==check) // Checking given number is armstrong or not
           result=1;
     System.out.print(result);
    }
}
