#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main(void)

 {
 	char c1=48,c2=48,c3=48;
 	while(1)
 	{

 		scanf("%c",&c1);

 		if(c1=='\n')
 		{
 			int n=c3-48 + (c2-48)*10;
 			n=n%4;
 			switch(n)
 			{
 				case 0 : printf("4"); break;
 				case 1 : printf("0"); break;
 				case 2 : printf("0"); break;
 				case 3 : printf("0"); break;
 				case 4 : printf("0"); break;
 			}
 			break;
 		}

 		scanf("%c",&c2);


 		if(c2=='\n')
 		{
 			int n=c1-48+(c3-48)*10;
 			n=n%4;
 			switch(n)
 			{
 				case 0 : printf("4"); break;
 				case 1 : printf("0"); break;
 				case 2 : printf("0"); break;
 				case 3 : printf("0"); break;
 				case 4 : printf("0"); break;
 			}
 			break;
 		}

 		scanf("%c",&c3);
 		if(c3=='\n')
 		{
 			int n=c2-48 +(c1-48)*10;
 			n=n%4;
 			switch(n)
 			{
 				case 0 : printf("4"); break;
 				case 1 : printf("0"); break;
 				case 2 : printf("0"); break;
 				case 3 : printf("0"); break;
 				case 4 : printf("0"); break;
 			}
 			break;
 		}
 	}
 }
