#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<malloc.h> 
#include<stdlib.h> 
struct student 
{ 
char usn[20]; 
char name[20]; 
char branch[20]; 
int sem; 
char phno[20]; 
struct student *next;
};
typedef struct student *NODE;
NODE first;
void main()
{
int sem,ch;
char name[20],usn[20],branch[20],num[20];
clrscr();
while(1)
	{
printf("\n____MAIN MENU____\n");
printf("\n1.CREATE(INSERT AT
FRONT)\n2.DISPLAY\n3.DELETE AT
FRONT\n4.INSERT AT END\n5.DELETE
AT END\n6.STACK
DEMONSTRATION\n7.EXIT");
printf("\nenter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert_front();
break;
case 2:display();
break;
case 3:delet_front();
break;
case 4:insert_end();
break;
case 5:if(first==NULL)
printf("list is empty\n");
else
delet_end();
break;
case 6:stackdemo();
break;
case 7:exit(0);
default :printf("\n invalid selection");
	 break;
}
}
}
