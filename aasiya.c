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

