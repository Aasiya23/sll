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
