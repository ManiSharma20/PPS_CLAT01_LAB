#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,choice;
	printf("enter the value of a:\t");
	scanf("%d",&a);
	printf("enter the value of b:\t");
	scanf("%d",&b);
	printf("enter the choice:\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("addition of a and b : %d",a+b);
			}
			break;
			case 2:
				{
					printf("substraction of a and b: %d",a-b);
				}
				break;
				case 3:
						printf("multiplication of a and b : %d",a*b);
					}
					break;
					case 4:
						{
							printf("division of a and b : %d",a/b);
						}
						break;
						default:
							{
								printf("wrong choice");
							}
					
					
	}
	getch();
}
