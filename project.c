# include <stdio.h>
# define MAX 50
struct Student{
    int roll;
    char name[30];
    float marks;
};
struct Student s[MAX];
int count =0;
void addStudent(){
    if(count>=MAX){
        printf("\nDatabase full!\n");
        return;
    }
    printf("\nEnter Roll Number:");
    scanf("%d",&s[count].roll);

    printf("Enter name:");
    scanf("%s",s[count].name);

    printf("Enter marks:");
    scanf("%f", &s[count].marks);

    count++;
    printf("\nStudent added successfully!\n");
}
void displayStudent(){
    if(count==0){
        printf("\nNo Students to display.\n");
        return;
    }
    printf("\n---Student Records---\n");
    for (int i=0;i<count;i++){
        printf("Roll:%d |Name: %s |Marks:%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
}
 void searchStudent(){
    int r;
    printf("\nEnter roll number to search:");
    scanf("%d",&r);
    for (int i= 0;i<count;i++){
        if(s[i].roll ==r){
            printf("\nStudent Found!\n");
            printf("Roll:%d\nName:%s\nMarks:%.2f\n",
                                                     s[i].roll,s[i].marks);
                                return;

        }
    }
    printf("\nStudent not found.\n");
 }
 int main(){
    int choice;

    do{
        printf("\n---Student Result Database---\n");
        printf("1.Add Student\n");
        printf("2.Display All Students\n");
        printf("3.Search Student\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch (choice){
            case 1: addStudent();break;
            case 2:displayStudent();break;
            case 3:searchStudent();break;
            case 4:printf("\nExiting...\n");break;
            default:printf("\ninvalid choice!\n");
        }

    }while (choice !=4);

    return 0;
 }