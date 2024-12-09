<<<<<<< HEAD
<<<<<<< HEAD
void delet_end()
{
NODE temp,prev;
temp=first;
if(temp->next==NULL)
first=NULL;
else
{
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
}
printf("\nthe deleted student usn is:
%s",temp->usn);
}

=======
<<<<<<< HEAD
void display()
{
NODE temp;
int count=0;
temp=first;
if(first==NULL)
printf("\nempty list\n");
else
{
printf("\nUSN\t\tNAME\t\tBRANCH\t\tSEM\t\tPHNO");
while(temp!=NULL)
{
printf("\n\n%s\t\t%s\t\t%s\t\t%d\t\t%s",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
temp=temp->next;
count++;
}
printf("\n\nthe number of nodes are %d",count);
}
}
>>>>>>> ca17ef8f76283b90e19d2819b66850453e9f6eac
=======
void insert_front() 
{ 
NODE nw; 
char usn[20],branch[20],name[20],num[20]; 
int x; 
printf("\nenter the student 
usn,name,branch,sem and phno:"); 
scanf("%s%s%s%d%s",usn,name,branch,&
 x,num); 
nw=(NODE)malloc(sizeof(struct student)); 
strcpy(nw->usn,usn);
strcpy(nw->name,name);
strcpy(nw->branch,branch);
nw->sem=x;
strcpy(nw->phno,num);
nw->next=first;
first=nw;
}
void insert_end()
{
NODE nw,p;
char usn[20],branch[20],name[20],num[20];
int x;
printf("\nenter the student
usn,name,branch,sem,phno:");
scanf("%s%s%s%d%s",usn,name,branch,&
 x,num);
nw=(NODE)malloc(sizeof(struct student));
strcpy(nw->usn,usn);
strcpy(nw->name,name);
strcpy(nw->branch,branch);
nw->sem=x;
strcpy(nw->phno,num);
nw->next=NULL;
if(first==NULL)
first=nw;
else
{
p=first;
while(p->next!=NULL)
p=p->next; 
p->next=nw; 
} 
} 
<<<<<<< HEAD
>>>>>>> f3732115b6b59271195220c0f0d799aaa8015fe1
=======

>>>>>>> f3732115b6b59271195220c0f0d799aaa8015fe1
void delet_front()
{
NODE temp;
if(first==NULL)
printf("list is empty\n");
else
{
temp=first;
first=temp->next;
printf("\nthe deleted student usn is:
%s",temp->usn);
free(temp);
=======
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
>>>>>>> menu
}
}
>>>>>>> ca17ef8f76283b90e19d2819b66850453e9f6eac
