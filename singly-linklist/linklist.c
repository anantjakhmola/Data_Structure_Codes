#include<stdio.h>
#include<malloc.h>
typedef struct linklist
{
int info;
struct linklist *next;
}nd;
nd* insertatr(nd *);
void display(nd*);
int main()
{
nd *l=NULL,*r=NULL;
int choice ,ch;
do
{
printf("1:insert\n2:display\n");
scanf("%d",&ch);
switch(ch)
{
case 1:r=insertatr(r);
if(l==NULL)
l=r;
break;
case 2:display(l);
break;
default:printf("invalid choice\n");
}
printf("do you want to continue(1)");
scanf("%d",&choice);
}while(choice==1);
}
nd* insertatr(nd *r1)
{
nd *p;
int x;
p=(nd*)malloc(sizeof(nd));
if(p==NULL)
{
printf("memory full");
}
else
{
scanf("%d",&x);
p->info=x;
if(r1==NULL)
r1=p;
else
{
r1->next =p;
r1=p;
}
r1->next=NULL;
}
return r1;
}
void display(nd*l)
{
while(l!=NULL)
{
printf("%d\n",l->info);
l=l->next;
}
}
