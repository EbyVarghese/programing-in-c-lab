#include<stdio.h>

#include<conio.h>

void main()

{

  int a=0,b=1,c,i,n;

  clrscr();

  printf("Enter the limit");

  scanf("%d",&n);

  for(i=1;i<=n;i++)

    {

      printf("%d\t",a);

      c=a+b;

      a=b;

      b=c;

     }

    getch();

}
