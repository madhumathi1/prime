include<stdio.h>
void main()
{
	clrscr();
	int num,i,count=0;
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	getch();
}
