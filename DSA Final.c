#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <curses.h>
#include <windows.h>

struct node {
    char name[30];
    char aadhar[20];
    char dob[20];
    int flag;
    struct node * next;
}*head,*start=NULL;

int count=0,R=3,vote=0;
int vote1=0,vote2=0,vote3=0,vote4=0,vote5=0;

struct node * main_logs(struct node *start);
struct node * voter_insert(struct node *start);

void votecount()
{
    int G;
          //system("cls");

          printf("\n\n\n\n");
    Sleep(300);
          printf("\t\t\tPresent Vote Count :\n\n");
    Sleep(300);
          printf("\t\t\t  Mamata Banerjee is on     %d Votes\n",vote1);
    Sleep(300);
          printf("\t\t\t  Deepa Dasmunsi is on      %d Votes\n",vote2);
    Sleep(300);
          printf("\t\t\t  Protima Rajak is on       %d Votes\n",vote3);
    Sleep(300);
          printf("\t\t\t  Joydeb Halder  is on      %d Votes\n",vote4);
    Sleep(300);
          printf("\t\t\t  Kartik Chandra Ghosh  is on     %d Votes\n\n\n\n",vote5);
}

void stop()
{
    //system("cls");
    printf("\n\n\n\n");
    Sleep(300);
           printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS FOR THREE(3) TIMES IN A ROW -:) \n\n\n");
    Sleep(300);
           printf("\t\t\t Plz try again After A few Moment\n\n\n");
    Sleep(300);
           printf("\t\t\t * * * * *  Thank You  * * * * *  \n\n\n");
           //printf("press any key");
    //getch();
}

void voters(struct node *p)
{
    while(p!=NULL)
    {
        if(p->flag==0)
        {
            Sleep(300);
            printf("\t%s\t%s\t%s\n",p->name,p->aadhar,p->dob);
        }
        p=p->next;
    }
}

void voting()
{
    //system("cls");
    printf("\n\n\n\n");
    Sleep(300);
        printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");
    Sleep(300);
        printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");
    Sleep(300);
        printf("\t\t\t 1.Mamata Banerjee                1.Fish\n");
    Sleep(300);
        printf("\t\t\t 2.Deepa Dasmunsi                 2.Boat\n");
    Sleep(300);
        printf("\t\t\t 3.Protima Rajak                  3.Motorcycle\n");
    Sleep(300);
        printf("\t\t\t 4.Joydeb Halder                  4.Broomstick\n");
    Sleep(300);
        printf("\t\t\t 5.Kartik Chandra Ghosh           5.Wheel\n\n\n");
        int B,j;
    Sleep(300);
           printf("\t\t\t Plzz, \n");
    Sleep(300);
           printf("\t\t\t Enter Your Choice \n");
           do{
               scanf("%d",&B);
               if(B==1)
               {
                   vote1++;
                   Sleep(300);
                   printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO MAMTA BANERJEE\n");
                   break;

               }
               else if(B==2)
               {
                   vote2++;
                   Sleep(300);
                    printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO DEEPA DASMUNSI\n");
                   break;

               }
               else if(B==3)
               {
                   vote3++;
                   Sleep(300);
                    printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO PROTIMA RAJAK\n");
                   break;

               }
               else if(B==4)
               {
                   vote4++;
                   Sleep(300);
                    printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO JOYDEB HALDER\n");
                   break;
               }
               else if(B==5)
               {
                   vote5++;
                   Sleep(300);
                    printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO KARTIK CHANDRA GHOSH\n");
                   break;
               }
                else
               {
                   Sleep(300);
                   printf("\n\t\t***** INVALID CHOICE ENTERED******\t\t\n");
                   Sleep(300);
                   printf("\n\t\t\tENTER AGAIN\t\t\t\n");
               }


           }while(B<1 || B>5);
    Sleep(300);
           printf("\n\n\t\t\t\t           *********THANK YOU**********           \n\n");
           //printf("press any key");
           //getch();

}

void winner()
   {
       //system("cls");
       printf("\n\n\n\n");
    Sleep(300);
       if(vote2<vote1 && vote3< vote1 && vote4<vote1 && vote5<vote1)
        printf("\t\t\tThe present Winner is Mamata Banerjee and she has got %d votes\n\n\n\n",vote1);

       else if(vote1<vote2 && vote3< vote2 && vote4<vote2 && vote5<vote2)
        printf("\t\t\tThe present Winner is Deepa Dasmunsi and she has got %d votes\n\n\n\n",vote2);

        else if(vote1<vote3 && vote2< vote3 && vote4<vote3 && vote5<vote3)
        printf("\t\t\tThe present Winner is Protima Rajak and she has got %d votes\n\n\n\n",vote3);

        else if(vote1<vote4 && vote2< vote4 && vote3<vote4 && vote5<vote4)
        printf("\t\t\tThe present Winner is Joydeb Halder and he has got %d votes\n\n\n\n",vote4);

        else if(vote1<vote5 && vote2< vote5 && vote3<vote5 && vote4<vote5)
        printf("\t\t\tThe present Winner is Kartik Chandra Ghosh and he has got %d votes\n\n\n\n",vote5);
    else
        printf("\t\t\tThe present results are tie....\n\n\n\n");

        //printf("\t\t\t\tEnter Any Key for Main Log\n\n");
        //getch();
        main_logs(start);

   }


void details(struct node *head,char names[],char aadhars[],char date[]){
   struct node *ptr=(struct node *)malloc(sizeof(struct node));
   struct node *p=head;
   strcpy(ptr->name,names);
   strcpy(ptr->aadhar,aadhars);
   strcpy(ptr->dob,date);
   ptr->flag=0;
   while(p->next!=NULL)
   {
       p=p->next;
   }
   p->next=ptr;
   ptr->next=NULL;
}

void traverse(struct node *p){
    system("cls");
    while(p!=NULL)
    {
        Sleep(300);
        printf("%s\t%s\t%s\n",p->name,p->aadhar,p->dob);
        p=p->next;
    }
}

void new(struct node *head)
{
    //system("cls");
    char n[30],id[20],b[20];
    Sleep(300);
    printf("\nENTER THE NAME :\n");
    scanf(" %[^\n]s",n);
    Sleep(300);
    printf("\nENTER THE AADHAR NUMBER :\n");
    scanf(" %s",id);
    Sleep(300);
    printf("\nENTER THE DATE OF BIRTH :\n");
    scanf(" %s",b);
    details(head, n, id, b);
}

void admin()
{
    //system("cls");
    int pass;
    printf("ENTER YOUR PASSWORD : \n");
    scanf(" %d",&pass);
    int opt;
    if(pass==3692)
    {
    do{
        Sleep(300);
            printf("\nENTER :\n");
        Sleep(300);
            printf("\t1. TO SEE THE VOTE COUNT \n");
        Sleep(300);
            printf("\t2. TO SEE THE LIST OF VOTERS \n");
        Sleep(300);
            printf("\t3. TO SEE THE LIST OF VOTERS WHO HAVE NOT GIVEN THEIR VOTES\n");
        Sleep(300);
            printf("\t4. TO INSERT THE DETAILS OF THE NEW VOTER\n");
     Sleep(300);
            printf("\t5. TO EXIT THE PORTAL\n");
            scanf("%d",&opt);

            switch(opt)
            {
                case 1:
                    votecount();
                    break;
                case 2:
                    traverse(head);
                    break;
                case 3:
                    voters(head);
                    break;
                case 4:
                    new(head);
                    break;
                case 5:
                    break;
                default:
                   Sleep(300);
                    printf("Invalid selection :\n");
                    break;
            }
    }while(opt!=5);
    }
    else
    {
        Sleep(300);
        printf("\nInvalid...\n");
    }
}

int main(){
    head=(struct node *)malloc(sizeof(struct node));
    strcpy(head->name,"Mahin Gandharv");
    strcpy(head->aadhar,"10001");
    strcpy(head->dob,"21-10-2003");
    head->flag=0;
    head->next=NULL;
    details(head,"Nupur Gandhi","10002","22-12-2003");
    details(head,"Arkin Gamit  ","10003","20-10-2003");
    details(head,"Shubham Kumar","10004","20-11-2003");
    details(head,"Priya Soni  ","10005","01-01-1999");
    details(head,"Priya Patel  ","10006","10-01-1998");
    details(head,"Riya Shah    ","10007","20-01-1995");
    details(head,"Kunj Shah    ","10008","15-07-1999");
    details(head,"Fenil Gandhi","10009","01-11-2000");
    details(head,"Disha Bhatt  ","10010","11-03-1993");
    //traverse(head);
    while(1)
    {
        printf("\n\n\n");
        Sleep(300);
        printf("\t            ** WELCOME TO THE ONLINE VOTING PORTAL **        \n\n");
        Sleep(300);
        printf("\t           *****************        \n\n\n\n\n");
       Sleep(300);
        printf("        \t\t **Please Enter One(1) for logging vote main Logs**    \n\n\n");
        int BB;
        scanf("%d",&BB);
        if(BB==1)
        {
              start=main_logs(start);
        }
    }

    return 0;
}

struct node * main_logs(struct node *start)
{
    //system("cls");
    int T;
    do{
        printf("\n\n\n");
        Sleep(300);
        printf("        \t\t\t1. FOR VOTE ENTRY     \n");
        Sleep(300);
        printf("        \t\t\t2. FOR ADMIN PANEL    \n");
        Sleep(300);
        printf("        \t\t\t3. FOR WINNER         \n");
        Sleep(300);
        printf("        \t\t\t4. TO EXIT THE PORTAL         \n");
        Sleep(300);
        printf("    \t IF YOUR CREDENTIALS MATCHES WITH THOSE IN THE VOTER LIST THEN ONLY YOU CAN GIVE YOUR VOTE OTHERWISE YOU CAN NOT    \n\n\n");
        Sleep(300);
        printf("    \t ***So Plz Enter***\n\n\n");
        scanf("%d",&T);
        switch(T)
        {
            case 1:
                R=3;
                start= voter_insert(start);
                break;
           case 2:
                admin();
                break;
           case 3:
                winner();
                break;
           case 4:
                break;
           default:
                //Sleep(300);
                printf("INVALID CHOICE... :\n");
                printf("ENTER AGAIN :\n");
                break;
        }
    }while(T!=4);
    return start;
}

struct node * voter_insert(struct node * start)
{
    //system("cls");
    char aadhars[20];
    printf("\n\n\n\n");
    Sleep(300);
     printf("\t IF YOUR AADHAR ID MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
   Sleep(300);
     printf("\t\t\t ID YOU DO WRONG %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n",R);
    Sleep(300);
     printf("\t\tPlease \n");
    Sleep(300);
     printf("\t\t\tENTER YOUR AADHAR ID ");
     scanf(" %s",aadhars);
     struct node *temp=head;
    while(temp!=NULL)
    {
        if(strcmp(temp->aadhar,aadhars)==0)
        {
            if(temp->flag==0)
            {
                voting();
                temp->flag=1;
                break;
            }
            else
            {
                printf("YOU HAVE ALREADY GIVEN YOUR VOTE");
                break;
            }
        }
        temp=temp->next;
    }
    if(temp==NULL)
    {
        R--;
        if(R>0)
        {
            start=voter_insert(start);
        }
        else{
            stop();
        }
    }
     return start;
}
