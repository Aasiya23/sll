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
}
}
