//Java program for largest prime factor for 600851475143
class ProjectEuler_Q2{
    public static void main(String[] args){
         long result=600851475143L;
          int i=0;
      while(true){ 
       for(i=2;i<result;i++){
             if(result%i==0){
                     result=result/i;
                      break;  
                    }
             }
            
          if(i==result){
               break;
                }
       }
        System.out.println(result);
         
  }
}
