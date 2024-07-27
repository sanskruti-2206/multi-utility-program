#include<stdio.h>
#include<conio.h>
main()
{
       int f,c,gross,hra,da,ta,base,tri,a,b;
     clrscr();
     //command for fahrenhits.
      printf("enter your celsisus=");
      scanf("%d", &c);
	f=(c+32)*9/5;
      printf("%d\n", f);
     //command for grosssalary.
      printf("enter your base=\n");
      scanf("%d", &base);
	hra=base*10/100;
	da=base*5/100;
	ta=base*8/100;
	gross=hra+da+ta+base;
      printf("%d\n",gross);
     //command for triangle finder.
      printf("enter your a=\n");
      printf("enter your b=\n");
      scanf("%d", &a);
      scanf("%d", &b);
	tri=180 - (a+b);
      printf("%d\n",tri);
     getch();

}