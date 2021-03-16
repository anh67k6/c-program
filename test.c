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
        printf("3.Sort ascending information the students by ID.\n");
        printf("4.Add a new student of HUST.\n");
        printf("5.Search for students by ID.\n");
        printf("6.Exit.\n");
        printf("================================\n");

        printf("Enter the option: ");
        scanf("%d",&option);

        switch (option){
            case 1:
                printf("Enter the number of students: ");
                scanf("%d",&n);
                enterInfor(list,n);
                break;
            case 2:
                printList(list,n);
                break;
            case 3:
                sortList();
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
        printf("Student name: "); fflush(stdin); scanf("%s",&list[i].studentName);
        printf("Birthdate : "); printf("Day: "); scanf("%d",&list[i].date.day);
        printf("Month: ");scanf("%d",&list[i].date.month);
        printf("Year: ");scanf("%d",&list[i].date.year);
        printf("Class name: ");scanf("%s",&list[i].className);
        printf("Course name: ");scanf("%s",&list[i].courseName);

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
printList(){
    FILE *fp = fopen("student.dat","r");

    int count =0;
    while(1){
        char info;
        info = getc(fp);
        if(info == '\n') count ++;
        if(info == EOF) break;
    }
    fclose(fp);
    int n = count/6;

    fp = fopen("student.dat","r");
    Student list[NMAX];

    char line[NMAX];
    int a,b,c;
    for(int i=0;i<n;i++){
        printf("|%-3d",i+1);
        fscanf(fp,"%d",&a); printf("|%d",a);
        fscanf(fp,"%s",&line); printf("|%-20s",line);
        fscanf(fp,"%d/%d/%d",&a,&b,&c); printf("%d/%d/%d",a,b,c);
        fscanf(fp,"%s",&line); printf("|%-15s",line);
        fscanf(fp,"%s",&line); printf("|%-20s\n",line);
    }
    fclose(fp);
    return 0;
}

sortList(){
    FILE *fp = fopen("student.dat","r");

    int count =0;
    while(1){
        char info;
        info = getc(fp);
        if(info == '\n') count ++;
        if(info == EOF) break;
    }
    fclose(fp);
    int n = count/6;

    Student list[NMAX];

    fp = fopen("student.dat","r");
    for (int i=0;i<n;i++){
        fscanf(fp,"%d",&list[i].studentId);
        fscanf(fp,"%s",&list[i].studentName);
        fscanf(fp,"%d/%d/%d",&list[i].date.day,&list[i].date.month,&list[i].date.year);
        fscanf(fp,"%s",&list[i].className);
        fscanf(fp,"%s",&list[i].courseName);
    }
    fclose(fp);
    
    Book tmp;
    for(int i=0;i<n;i++){
        for(int j=i+1,j<n;j++){
            if(list[i].studentId > list[j].studentId)
                tmp = list[i];
                list[i] =list[j];
                list[j] =tmp;
        }
    }
    
    fp = fopen("student2021.dat","w+");

    for(int i=0;i<n;i++)
}



