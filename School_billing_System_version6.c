// مدرسة السعدية بنين Billing System

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// Structs
struct date{
    int _day;
    int _month;
};

struct student{
    struct date obj_date;
    char _name[20];
    int ID;
    int _classNo;
    int _rollNo;
    int grade;
};

struct teacher
{
    struct date obj_date;
    int _ID;
    char _name[20];
    int _ClassOrShift;
    int working_hours;
    int over_time;
    int total_salary;
};


/// Functions and Variables Declaration
void start(); // Starts the program
void account(); // Goes to the account page to do operations
int accType; // Determine the accType
void addRec(); // Takes info of the new account
void salary();
void fee();
void modrec();
void delRec();
void search();
struct student newStudent;
struct teacher newTeacher;

// Main Function
int main(){
    start();
    return 0;
}

// Definition of The Start Function
void start(){
    system("color 5");///change color gui
    printf(" \t_______________________________________________________\n");
    printf("\t|                                                      |\n");
    printf("\t|**Welcome at Elsaedia School Billing System|**\n");
    printf("\n\t|                                                      |\n");
    printf("\t ______________________________________________________\n");
    printf("\t|    DEVELOPED BY CODE WITH C \n\tTEAM: Rawan, Menna, M.Helmy, Passant|\n\tPresented to Dr. Khaled and Eng, Shaymaa");
    printf(" \t________________________________________________________\n");
    printf("\t|    *****************************************            |\n");
    printf("\t|    *****************************************            |\n");
    printf(" \t_______________________________________________________\n");
    printf("\nPlease, choose the account type: -");
    printf("\n1- Student\n2- Teacher\n3- Exit");
    printf("\nEnter here: ");
    scanf("%d",&accType);
    while (accType)
    {
        if(accType==1||accType==2){
            account();
            break;
        }
        else if(accType==3)
        {
            exit(0);
            break;
        }
        else
        {
            printf("Please, enter a valid choice..\n");
            scanf("%d",&accType);
            continue;
        }
    }
}

// Definition of The Account Function
void account(){
    int choice; // Determine the choice for this step
    printf("\nWhat do you want to do?");
    printf("\n1- Add Record");
    printf("\n2- Search Record");
    printf("\n3- Modify Record");
    printf("\n4- Delete Record");
    if (accType==1)
    {
        printf("\n5- Calculate Fee");
    }
    else
    {
        printf("\n5- Calculate Salary");
    }
    printf("\n6- Back");
    printf("\n7- Exit");
    printf("\nEnter here: ");
    scanf("%d",&choice);
    while (choice)
    {
        switch (choice)
        {
            case 1:
                addRec();
                break;
            case 2:
                search();
                break;
            case 3:
                modrec();
                break;
            case 4:
                delRec();
                break;
            case 5:
                if (accType==1)
                {

                    fee();
                }
                else
                {
                    salary();

                }
                break;
            case 6:
                start();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
        }
        break;
    }
}

// Definition of addRec Function
void addRec(){
    printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    int choice;
    if (accType==1)
    {
        printf("\n\t\t\t\t\t\t\t\t\t****** Add Record ******");
        printf("\nStudent Name: ");
        scanf("%s",&newStudent._name);
        printf("ID: ");
        scanf("%d",&newStudent.ID);
        printf("Grade: ");
        scanf("%d",&newStudent.grade);
        printf("Class No.: ");
        scanf("%d",&newStudent._classNo);
        printf("Roll No.: ");
        scanf("%d",&newStudent._rollNo);
        printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t****** Add Record ******");
        printf("\nTeacher Name: ");
        scanf("%s",&newTeacher._name);
        printf("ID: ");
        scanf("%d",&newTeacher._ID);
        printf("Class/Shift: ");
        scanf("%d",&newTeacher._ClassOrShift);
        printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);
    }
}

///it is recursive function return the total till 12.
int Sum_grade(int n)
{
   if(n==0)
     return n;
   else
      return n+Sum_grade(n-1);
}

void fee()
{
    printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          FEE     *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************\n");
struct student newStudent;
int choice;
int n;
int prep1=2000;
int prep2=prep1+prep1*15/100;
int prep3=prep2+prep2*15/100;
int prep4=prep3+prep3*15/100;
int prep5=prep4+prep4*15/100;
int prep6=prep5+prep5*15/100;
int prep7=prep6+prep6*15/100;
int prep8=prep7+prep7*15/100;
int prep9=prep8+prep8*15/100;
int prep10=prep9+prep9*15/100;
int prep11=prep10+prep10*15/100;
int prep12=prep11+prep11*15/100;
int prep[12]={prep1,prep2,prep3,prep4,prep5,prep6,prep7,prep8,prep9,prep10,prep11,prep12};

printf("Enter your name student:\n");
    scanf("%s",&newStudent._name);
printf("Enter your Id: \n");
    scanf("%d",&newStudent.ID);
printf("enter your grade from 1 to 12:");
scanf("%d",&newStudent.grade);
if(newStudent.grade<=12)
{
    printf("the fee of is prep[%d]=%d EGP\n",newStudent.grade,prep[newStudent.grade-1]);
}
else
    printf("Your grade should be between 1-12\n please chose from 1-12 as we have 12 only grade\n");
    printf("if you want to know the summation of the grade press 12\n ");///it is recursive function return the total till 12.
    scanf("%d",&n);
    Sum_grade(n);
    printf("%d",Sum_grade(n));
///to return back
printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);

}


void salary()
{
    printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          SALARY     *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************\n");
    struct teacher newTeacher;
    int choice;
    printf("Enter your name teacher:\n");
    scanf("%s",&newTeacher._name);
    printf("Enter your Id: \n");
    scanf("%d",&newTeacher._ID);
    printf("Enter your working hours:\n");
    scanf("%d",&newTeacher.working_hours);
    printf("Enter your over time:\n");
    scanf("%d",&newTeacher.over_time);
    if((newTeacher.working_hours&&newTeacher.over_time)>0)
    {
        newTeacher.total_salary=(newTeacher.working_hours*100)+(newTeacher.over_time*150);
        printf("your total salary for [%s]:%d EGP",newTeacher._name,newTeacher.total_salary);
        if(newTeacher.over_time>100)
            printf("\ngreat work you exceed the maximum over time\n");
    }
    else
        printf("please enter possitive number for time : \n");
///to return back
printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);

}


//defination of modify record
void modrec()
{
printf("\n\t******************************************************************");

printf("\n\t                    ***************************                  ");

printf("\n\t*********************   MODIFY RECORD     *******************");

printf("\n\t                     ***************************                  ");

printf("\n\t******************************************************************");
int choice;
printf("\nIf you want to modify a student record press=1\nIf you want to modify teacher press=2\nEnter your choice: ");
scanf("%d",&choice);
int a=1; ///found
if(choice==1)///choice of student
{
    struct student newStudent;
    char name_new;
    int new_class,new_roll;
    int choice_mod;
    printf("\n\t\t\tModify Record");
    printf("\n Choose Type To Modify:");
    printf("\nModify by name press 1:\nModify by name&class:press 2\nModify by name,class&rollno:press 3\n");
    scanf("%d",&choice_mod);

    if (choice_mod==1)//Modify by name of student.
        {
          printf("\n enter name of student to modify:");
          scanf("%s",newStudent._name);
          if(newStudent._name==a)//student is found
           {
             printf("the name is found please enter your new name:\n");
             printf("\n enter new name:");
             scanf("%s",&name_new);
             printf("\n Records Successfully Modififed\n");
           }
         /* else
            printf("\n Records Not Found\n");*/
        }
    else if(choice_mod==2) //Modify by name&class:
       {
            printf("\n enter name of student to modify:");
            scanf("%s",newStudent._name);
            printf("enter the class of student to be modify:\n");
            scanf("%d",&newStudent._classNo);
            if(newStudent._name&&newStudent._classNo==a)//student is found
           {
              printf("the name is found please enter your new name:\n");
              printf("\n enter new name:");
              scanf("%s",&name_new);
              printf("enter the class of student:\n");
              scanf("%d",&new_class);
              printf("\n Records Successfully Modififed\n");
          }
           /* else
              printf("\n Records Not Found\n");*/
       }


    else if(choice_mod==3)//modify by name,class&rollno
        {
            printf("\n enter name of student to modify:");
            scanf("%s",newStudent._name);
            printf("enter the class of student to be modify:\n");
            scanf("%d",&newStudent._classNo);
            printf("enter the roll of student to be modify:\n");
            scanf("%d",&newStudent._rollNo);
           if(newStudent._name&&newStudent._classNo&&newStudent._rollNo==a)//student is found
           {
              printf("the name is found please enter your new name:\n");
              printf("\n enter new name:");
              scanf("%s",&name_new);
              printf("enter the class of student:\n");
              scanf("%d",&new_class);
              printf("enter the roll of student:\n");
              scanf("%d",&new_roll);
              printf("\n Records Successfully Modififed\n");
          }
          /*else
             printf("\n Records Not Found\n");*/
        }


}



else if(choice==2)//choice of teacher
        {
         struct teacher newTeacher;
         char name_new;
         int new_id;
         int choice_mod;
        printf("\n\t\t\t\t\t\t\t\t Modify Record");
        printf("\n Choose Type of Modify:");
        printf("\n\t1::Modify by name press1:\n Modify by name&id press2\n");
        scanf("%d",&choice_mod);
        if(choice_mod==1)//Modify by name of teacher
        {
            printf("\n enter name of teacher to modify:");
            scanf("%s",newTeacher._name);
            if(newTeacher._name==a)//teacher is Found
            {
                printf("the name is found please enter your new name:\n");
                printf("\n enter new name:");
                scanf("%s",&name_new);
                printf("\n Records Successfully Modififed \n");

            }
            ///if the search is not found
            /*else
            printf("\n Records Not Found \n");
            */

        }

        else if(choice_mod==2)//modify by name&Id:
        {
            printf("\n enter name of teacher to modify:");
            scanf("%s",newTeacher._name);
            printf("enter the id of teacher to modify:\n");
            scanf("%d",&newTeacher._ID);
            if(newTeacher._name&&newTeacher._ID==a)//teacher is Found
            {
                printf("the name is found please enter your new name:\n");
                printf("\n enter new name:");
                printf("enter the id of teacher:\n");
                scanf("%d",&new_id);
                printf("\n Records Successfully Modififed\n");

            }
           /* else
            printf("\n Records Not Found\N");
            */
        }

}

///to return back
int choice_return;
printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice_return);
        while (choice_return)
        {
            if(choice_return==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice_return);
                continue;
            }
        }
        exit(0);
}

//defination of delete Records
void delRec()
{
printf("\n\t******************************************************************");

printf("\n\t                     ***************************                  ");

printf("\n\t*********************          DELETE RECORD     *******************");

printf("\n\t                     ***************************                  ");

printf("\n\t******************************************************************");
int choice;
printf("enter your choice \nif you want to delete student press1\n if you want to delete teacher press2\n");
scanf("%d",&choice);
if(choice==1)//choice of student
    {
        struct student newStudent;
        int choice_del;
        printf("\n\t\t\t\t\t\t\t\t Delete Record");
        printf("\n choose type to delete:");
        printf("\n\t1::to delete name press1\n");
        scanf("%d",&choice_del);
        if(choice_del==1)//delete name of student
        printf("\n enter name of student to delete:");
        scanf("%s",newStudent._name);
        if(newStudent._name==1)//the name is found
        {
            printf("\n Record Successfully Deleted\n");
        }
        else
            printf("\n Records Not Found \n");
    }


else if (choice==2)//choice of teacher
        {
            struct teacher newTeacher;
            int choice_del;
            printf("\n\t\t\t\t\t\t\t\t Delete Record:");
            printf("\n\t1::to delete name press1\n");
            scanf("%d",&choice_del);
            if (choice_del==1)//delete name of teacher
            {
              printf("\n enter name of teacher to delete :");
              scanf("%s",newTeacher._name);
            }

            if (newTeacher._name==1)
              {
                printf("\n Record Successfully Deleted \n");

              }
            else
                printf("\n Records Not Found \n");
        }

 int choice_return;
printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice_return);
        while (choice_return)
        {
            if(choice_return==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice_return);
                continue;
            }
        }
        exit(0);

}

//defination of search function
void search()
{
printf("\n\t******************************************************************");

printf("\n\t                    ***************************                  ");

printf("\n\t*********************   SEARCH RECORD     *******************");

printf("\n\t                     ***************************                  ");

printf("\n\t******************************************************************");
int choice;
if(accType==1){
    int id;
    printf("\nEnter id: ");
    scanf("%d",&id);
    if (id==newStudent.ID)
    {
        printf("The record exist..\n");
        printf("Name: %s",newStudent._name);
        printf("\nGrade: %d",newStudent.grade);
        printf("\nClass No.: %d",newStudent._classNo);
        printf("\nRoll No.: %d",newStudent._rollNo);
        printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);
    }
    else{
        printf("The record does not exist..\n");
        printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);
    }
}
else{
    int id;
    printf("\nEnter id: ");
    scanf("%d",&id);
    if (id==newTeacher._ID)
    {
        printf("The record exist..\n");
        printf("Name: %s",newTeacher._name);
        printf("\nGrade: %d",newTeacher._ClassOrShift);
        printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);
    }
    else{
        printf("The record does not exist..\n");
        printf("\nDo you want to do more operations (Yes=1,No=0)? ");
        scanf("%d",&choice);
        while (choice)
        {
            if(choice==1){
                start();
            }
            else
            {
                printf("Please, enter a valid choice..\n");
                scanf("%d",&choice);
                continue;
            }
        }
        exit(0);
    }
}
}