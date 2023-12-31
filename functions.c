#include"functions.h"
//  function to print the names of all the students having age 19. 

void age_19(int n){
     for(int index=0;index<n;index++)
    {
        if(std[index].age == 19){
        printf("Name is: %s\n", std[index].name);
    }

    }

}

// a function that prints the names of all students whose email addresses start with ’I’ or ’T’.
void email_starts_with_I_T(int n){
    for(int index=0; index<n; index++){
        if(std[index].email_id[0] == 'I'||std[index].email_id[0] == 'T'){
            printf("Name is: %s\n", std[index].name);
        }
    }
}

// function to display the details of the student whose email is given 
void student_info_using_email(int n, char *email){
    for(int index =0; index<n; index++){
        if(strcmp(std[index].email_id, email)==0){
          printf("Name is: %s\n", std[index].name);
          printf("Age is: %d\n", std[index].age);
          printf("Roll no. is: %d\n", std[index].rollno);
          printf("Address is: %s\n", std[index].address);
          printf("Email id is %s\n", std[index].email_id);

        }
    }

}