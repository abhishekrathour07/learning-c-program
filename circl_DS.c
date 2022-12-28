#include<stdio.h>
#include<stdio.h>
//#include<conio.h>
      typedef struct node
      {
        int data;
        struct node *next,*prev;
      }
node ;
node*head;
    void main()
    {
        node *p,*q;
        int n,i;
        clrscr();
        printf("enter the no. of nodes");
        scanf("%d",&n);
        head=(node*)malloc(sizeof(node));
        printf("enter data");
        scanf("%d",&head->data);
        head->prev=head;
        head->next=head;
        p=head;
        for(i=1;i<n;i++){
            p->next=(node*)malloc(sizeof(node));
            q=p;
            p=p->next;
            printf("enter data");
            scanf("%d",&p->data);
            p->next=head;
            p->prev=q;
            head->prev=p;
        }
        p=head;
        while(p->next!=head){
            prinf("%d->",p->data);
            p=p->next;
        }
        printf("%d->",p->data);
getch();
}

        
    
    