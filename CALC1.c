#include<stdio.h>
#include<math.h>
#include<conio.h>
	int
	main (void)
	{
	char c;
			float a,b,var,i;
		        int x;
			double var2,prod;
			double ar[200]; 
			
	
		while(1)
		{
			if(x % 2 == 0){
			printf("Enter a letter (uppercase only!):\n");
			printf(" A - Addition\n S - Substraction\n M - Multiplication\n D - Division\n T - Tables\n");	   
            x=0;
			} 
			 
			c = getchar();
			x++;
				printf("\n");
				switch(c) {
      case 'A' :
	  printf("Enter 2 numbers \n" );
	  scanf("%f%f",&a,&b);
  
	  var= a+b;
	 printf("Sum of entered numbers = %f\n",var);
 
         break;
		 
		  case 'S' :
	  printf("Enter 2 numbers \n" );
	  scanf("%f%f",&a,&b);
  
	  var= a-b;
	 printf("Difference of entered numbers = %f\n",var);
 
         break;
		 
		  case 'M' :
	  printf("Enter 2 numbers \n" );
	  scanf("%f%f",&a,&b);
  
	  var= a*b;
	 printf("Product of entered numbers = %f\n",var);
 
         break;
		  case 'D' :
	  printf("Enter 2 numbers \n" );
	  scanf("%f%f",&a,&b);
  
	  var2 = a/(float)b;
	 printf("Division of entered numbers = %.20f\n",var2);
 
         break;
		 /*case 'Z' :
	  printf("Enter a number \n" );
	  scanf("%d",&a);
  
	 printf("Square root of entered number is =" %lf\n",a,sqrt(a));
 
         break;*/
		 case 'T' : 
		 printf("Enter a number : \n");
		 scanf("%f" ,&a);
		 printf("Enter the range : \n");
		 scanf("%f" , &b);
		 for(i=1;i<=b;i++){
		 printf("%f * %f = %f \n", a, i, a*i);}
		 break;
		 
		 case 'E' :
		 return(0); 
		    /*default :
         printf("Invalid letter\n" );*/
		 
   }
   
}
}
