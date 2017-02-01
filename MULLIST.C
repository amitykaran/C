# include<stdio.h>
# include<conio.h>
#include<alloc.h>
struct node
   { struct node *pre;
     int data;
     struct node *next;
	  };
void main()
  {
   int val,t,h,a,f,e,q,b,c,d,i,w,x,g;
   char k,p=NULL;
   struct node *temp,*ml,*ms,*start[22],*ts[25],*start1,*ts1,*start2,*ts2;
   clrscr();
   start1=NULL;
   i=0;
     printf("\t\tEnter first number:\t\t\n");
 while(p!='@')
  {
    p=getche();
  if(p!='@')
  {
    val=p-'0';
    temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
  if(start1== NULL)
      {
	 start1=temp;
	 temp->pre=NULL;
	     }
  else
     {
	      ts1=start1;
	while(ts1->next!=NULL)
	   {
	      ts1=ts1->next;
		}
	ts1->next=temp;
	temp->pre=ts1;
	  }
   }

     }

    printf("\n\t\tEnter second number:\t\t\n");
	i=0;
    start2=NULL;
 while(k!='@')
  {
      k=getche() ;
   if(k!='@')
   {
    val=k-'0' ;
    temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
  if(start2== NULL)
      {
	 start2=temp;
	 temp->pre=NULL;
	     }
  else
     {
	      ts2=start2;
	while(ts2->next!=NULL)
	   {
	      ts2=ts2->next;
		}
	ts2->next=temp;
	temp->pre=ts2;
	  }
      }

     }
      printf("\nfirst  number:");
  ts1=start1;
   while(ts1!=NULL)
     {
	printf("%d",ts1->data);
	ts1=ts1->next;
	  }

       printf("\nsecond number:");
  ts2=start2;
   while(ts2!=NULL)
     {
	printf("%d",ts2->data);
	ts2=ts2->next;
	  }
   /*till this  value are insert in link list */

	   ts2=start2;

   while(ts2->next!=NULL)
   {
      ts2=ts2->next;
      }

     i=0;


   while(ts2!=NULL)
   {  ts1=start1;
     c=0;
      start[i]=NULL;
     while(ts1->next!=NULL)
     {
       ts1=ts1->next;
       }

     while(ts1!=NULL)
      {  temp=malloc(sizeof(struct node));
       a=(ts1->data*ts2->data)+c;
       b=a%10;
       c=a/10;
       temp->data=b;
       temp->next=NULL;

       if(start[i]==NULL)
	 {  start[i]=temp;
	    temp->pre=NULL;
	    }
       else
       {
		ts[i]=start[i];
		while(ts[i]->next!=NULL)
		  {
		       ts[i]=ts[i]->next;
		       }
		ts[i]->next=temp;
		temp->pre=ts[i];
	    }
	ts1=ts1->pre;
       }
       while(c!=0)
       {
	 temp=malloc(sizeof(struct node));
	 b=c%10;
	 temp->data=b;
	 c=c/10;
	 temp->next=NULL;
	    ts[i]=start[i] ;
	    while(ts[i]->next!=NULL)
	     {
		ts[i]=ts[i]->next;
		}
	      ts[i]->next=temp;
	      temp->pre=ts[i] ;

	}
	ts2=ts2->pre;
	i++;
      }
   /* till here multiplication of all digits occur*/
    d=i;
    printf("\n");
for(i=0;i<d;i++)
{
  ts[i]=start[i];
  while(ts[i]->next!=NULL)
  {
     ts[i]=ts[i]->next;
     }
     printf("\nproduct of number:");

  while(ts[i]!=NULL)
  {
     printf("%d",ts[i]->data) ;
     ts[i]=ts[i]->pre;
     }
 }

 /*addition*/
     printf("\nmultiplication start\n");
 i=0;
 ms=NULL;
 c=0;
 x=0;
f=0;

 while(a!=0||c!=0||b!=0)
 {    g=0;

    if(i<d)
  {
    ts[i]=start[i];
	       }
    if(i==d)
     i--;

    x=i;
    for(q=0;q<=x;q++)
    {
      g=g+ts[q]->data;
      }
    a=g+c;
    b=a%10;
    c=a/10;
    temp=malloc(sizeof(struct node));
    temp->data=b;
    temp->next=NULL;
    if(ms==NULL)
    {
	ms=temp;
	temp->pre=NULL;
	}
    else
    {
	ml=ms;
	while(ml->next!=NULL)
	{
		ml=ml->next;
		}
	 ml->next=temp;
	 temp->pre=ml;

	 }


	 w=i;
	 for(e=0;e<=w;e++)
	 {
	   ts[e]=ts[e]->next;
	   }
       if(i<d)
	 i++;


	 }


   ml=ms;
   printf("\n");
   printf("multiplication:");
   while(ml->next!=NULL)
    {
    ml=ml->next;
    }
    while(ml!=NULL)
    {
	 printf("%d",ml->data) ;
	 ml=ml->pre;
	 }


getch();

}
