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
