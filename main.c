#include"functions.h"

  int main(){  
    int n;
    char email[100];
    printf("Enter the number of students:- ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
    printf("Name of student:- ");
    scanf("%s", std[i].name);
    scanf("%[^\n]s", std[i].name);
    printf("Age of student:- ");
    scanf("%d", &std[i].age);
    printf("Roll no. of student:- ");
    scanf("%d", &std[i].rollno);
    printf("Address of student:- ");
    scanf("%s", std[i].address);
    scanf("%[^\n]s", std[i].address);
    printf("Email id of student:- ");
    scanf("%s", std[i].email_id);
     
    }

printf("Enter the required email:- ");
scanf("%s",email );



  age_19(n);
  email_starts_with_I_T(n);
  student_info_using_email(n, email);

return 0;
}