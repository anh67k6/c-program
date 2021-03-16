#include<stdio.h>
#include<string.h>
#define NMAX 200
typedef struct date {
    int day;
    int month;
    int year;
} Date;

typedef struct student {
    int studentId[8];
    char studentName[20];
    Date date;
    char className[15];
    char courseName[20];
}   Student;

int main(){
    Student list[NMAX];
    int n;
    int option;

    do{
        printf("================================\n");
        printf("1.Enter information of the entered students.\n");
        printf("2.Display the information of the entered students. \n");
        printf("3.Sort ascending information the students by student name.\n");
        printf("4.Add a new student of HUST.\n");
        printf("5.Search for students by student name.\n");
        printf("6.Exit.\n");
        printf("================================\n");

        printf("Enter the option: ");
        scanf("%d",option);

        switch (option){
            case 1:
                printf("Enter the number of students: ");
                scanf("%d",&n);
                enterInfor(list,n);
                break;
        }
    } while (option != 6);
    return 0;
}

enterInfor(Student list[], int n){
    FILE *fp = fopen("student.dat","w+");

    for(int i=0;i<n;i++){
        printf("Student %d: \n",i+1);
        printf("Student ID: ");scanf("%d",&list[i].studentId);
        printf("Student name: "); fflush(stdin); gets(list[i].studentName);
        printf("Birthdate : "); printf("Day: "); scanf("%d",list[i].date.day);
        printf("Month: ");scanf("%d",list[i].date.month);
        printf("Year: ");scanf("%d",list[i].date.year);
        printf("Class name: ");gets(list[i].className);
        printf("Course name: ");gets(list[i].courseName);

        fprintf(fp,"%d\n",list[i].studentId);
        fprintf(fp,"%s\n",list[i].studentName);
        fprintf(fp,"%d/%d/%d\n",list[i].date.day,list[i].date.month,list[i].date.year);
        fprintf(fp,"%s\n",list[i].className);
        fprintf(fp,"%s\n",list[i].courseName);
        fprintf(fp,"\n");
    }
    fclose(fp);
    printf("Done!!\n");
    return 0;
}

