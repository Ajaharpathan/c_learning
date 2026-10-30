#include<stdio.h>
int main()
{
//     int i=1;
//     while(i<=10)
//	 {
//	 	printf("%d\n", i);
//	 	i++;
//		  }     

//       int i=10;
//       while(i>=1)
//       {
//       	printf("%d \n", i);
//       	i--;
//	   }

//       int i=0;
//     while(i<=50)
//	 {
//	 	printf("%d \n", i);
//	 	i= i + 2;
//		  } 


//          int i;
//          while (i<=100)
//          {
//          	printf("%d \n", i);
//          	i++;
//		  }
		  
//		  int j = 1;
//		  while(j<=50)
//		  {
//		  	printf("%d \n", j);
//		  	j+=2;
//		  }

//            int i = 1;
//            while(i<=100)
//            {
//               if(i % 5 == 0)
//               {
//               	printf("%d \nn", i);
//               
//			   }
//			   	i++;
//			}

//            int a=1;
//            while(a<=100)
//            {
//            	if(a % 3 == 0)
//            	{
//            		printf("%d \n", a);
//				}
//				a++;
//			}

//             int i =2;
//             while(i<=20)
//             {
//               if(i % 2 == 0)
//               {
//               	printf("%d \n", i);
//               	
//			   }
//			   i++;
//			 }
       
			
//	        int num, i = 1;
//            printf("Enter a number: ");
//            scanf("%d", &num);
//
//            while (i <= 10)
//            {
//            printf("%d * %d = %d\n", num, i, num * i);
//             i++;
//            }

//            int num, i=1;
//            printf("Enter Number:");
//            scanf("%d", &num);
//            while(i<=10)
//            {
//            	printf("%d \n",  num*i);
//            	i++;
//			}


//              int i=1;
//              while(i<=10)
//              {
//              	printf("%d \n", i*i);
//              	i++;
//			  }
  
//                 int j=1;
//                 
//                 while(j<=20)
//                 {
//                 	printf("%d \n", j*j*j);
//                 	j++;
//				 }

//                 int i = 1 , sum = 0;
//                 while(i<=10)
//                 {
//                 	sum+=i;
//                 	i++;
//				 }
//				 printf("sum = %d", sum);

//                   int i = 1, sum = 0;
//                   while(i<=50)
//                   {
//                   	if(i % 1 == 0)
//                   	{
//					   sum+=i;
//					   
//                   
//                   	}
//                   	i++;
//				   }
//				   printf("%d", sum);

               
//               int i =1, sum = 0;
//               while(i<=50)
//               {
//               	if(i % 1 == 0)
//               	{
//               		sum+=i;
//				   }
//				   i++;
//			   }
//			   printf("%d \n", sum);


    int num, i = 1, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    
    printf("%d \n", fact);
 
}
