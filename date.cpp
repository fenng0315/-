#include <stdio.h>

int main()
{
	int mm, dd, yy;
	printf("Enter date (mm/dd/yy):\n");
	scanf("%d /%d /%d", &mm, &dd, &yy);
	
	printf("Dated this ");
	switch (dd) {
		case 1: case 11: case 21: case 31:
			printf("%dst", dd);break;
		case 2: case 12: case 22:
			printf("%dnd", dd);break;
		case 3: case 13: case 23:
			printf("%drd", dd);break;
		default:
			printf("%dth", dd);break;
	}
	
	printf(" day of ");
	switch (mm) {
		case 1: printf("January", mm);break;
		case 2: printf("Febrary", mm);break;
		case 3: printf("March", mm);break;
		case 4: printf("April", mm);break;
		case 5: printf("May", mm);break;
		case 6: printf("June", mm);break;
		case 7: printf("July", mm);break;
		case 8: printf("August", mm);break;
		case 9: printf("September", mm);break;
		case 10: printf("October", mm);break;
		case 11: printf("November", mm);break;
		case 12: printf("December", mm);break;
	}
	
	printf(",20%d.\n",yy);
	
	if(mm==1||mm==2)
	{
        mm+=12;
        yy--;
    }
    
    int week=(dd+2*mm+3*(mm+1)/5+yy+yy/4-yy/100+yy/400)%7;
    switch(week)
    {
    case 0: printf("星期一\n"); break;
    case 1: printf("星期二\n"); break;
    case 2: printf("星期三\n"); break;
    case 3: printf("星期四\n"); break;
    case 4: printf("星期五\n"); break;
    case 5: printf("星期六\n"); break;
    case 6: printf("星期日\n"); break;
	}
	
	return 0;
}
