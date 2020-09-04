#include<stdio.h>

void add(int array1[],int array2[],int array[])
{
    int rest_digits=0,last_digit=0;
    for(int i=0;i<250;i++)
    {
        int x=array1[i]+array2[i]+rest_digits;  // here the value of 'x' is calculated as Follows
        last_digit=x%10;    // The last_digit variable gives the remainder when 'x' is divided by 10 
        rest_digits=x/10;   // The rest_digits variable give the rest of the digits when 'x' is divided by 10
        array[i]=last_digit; // Now we use this array to store the last digit that we get when 'x' is divided by 10 (i.e the remainder)
    }
}

int main()
{
    int number;      // Here n is the nth fibonacci nummber that u wanna find
    scanf("Enter the number whose fibonacci number is to be found %d",&number);
   
    int funtion[500],function1[500],function2[500]; //Here we are taking 3 integer arrays to find out the nth fibbo value 

    for(int i=0;i<500;i++){
        
        
        function[i]=0;
         function1[i]=0;                                                 
        function2[i]=0;                       /* Here we are initializing all the 3 function arrays to 0
                                                                  i.e  function[i]=0; 
                                                                            function1[i]=0
                                                                                 function2[i]=0 */
    }
            function[0]=1;      
            function1[0]=1;      //Now we need to initialize the initial element of each array to 1
            function2[0]=1;         // so that the sum doesnt become 0 when added....
    
          
    for(int i=3;i<=n;i++)
    {
        for(int i=0;i<500;i++)          //Here we are storing the vlaues of the array function1 into the array function2
            
           function2[i]=function1[i];
        
        for(int i=0;i<500;i++)
                                            //Now here too ,similar to above loop , the values of function array are stored into function1 array
           function1[i]=function[i];
        
        add(function1,function2,funtion); //now here the values of the last digit found using certain operations above are stored inside the function array ...
    }                                       // By the end of the above loop , the nth fibonacci number needed was finally stored in the function array.....
                                               //hence in this way nth fibonacci number is found.....
    
    for(int i=210;i>=0;i--)
      printf("%d",function[i]);                     //This prints the nth fibonacci number    
    
}
/*
INPUT  : Enter the number whose fibonacci number is to be found
          1000

OUTPUT : 0043466557686937456435688527675040625802564660517371780402481729089536555417949051890403879840079255169295922593080322634775209689623239873322471161642996440906533187938298969649928516003704476137795166849228875
