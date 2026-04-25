#include<stdio.h>                                                               // For input/output functions like printf, scanf
#include<stdlib.h>                                                              // For dynamic memory allocation (malloc)
#include<string.h>                                                              // For string functions like strcmp

// Structure to store student details
struct students
{
    char name[50];                                                              // To store student name
    int roll_no;                                                                // To store roll number
    int *marks;                                                                 // Pointer to store marks dynamically (for multiple subjects)
    float average;                                                              // To store average marks
    char grade;                                                                 // To store grade (A/B/C/D)
};

// Function to calculate average and grade for all students
void calculate(struct students s[], int no_of_students, int no_of_subjects)
{
    // Loop through each student
    for(int i=0; i<no_of_students; i++)
    {
        int sum = 0;  // Variable to store total marks of a student
        
        // Loop through each subject
        for(int j=0; j<no_of_subjects; j++)
        {
            sum = sum + s[i].marks[j];   // Add marks of each subject
        }
        
        // Calculate average
        s[i].average = (float)sum/no_of_subjects;
        
        // Assign grade based on average
        if(s[i].average>=90)
        {
            s[i].grade = 'A';
        }
        else if(s[i].average >= 75)
        {
            s[i].grade = 'B';
        }
        else if(s[i].average >= 60)
        {
            s[i].grade = 'C';
        }
        else
        {
            s[i].grade = 'D';
        }
    }
}

// Function to display all student details
void display_all(struct students s[], int no_of_students, int no_of_subjects, char **subject_name)
{
    // Print header
    printf("Roll No.   Name");
    
    // Print subject names
    for(int i=0; i<no_of_subjects; i++)
    {
        printf("    %s", subject_name[i]);
    }
    
    printf("   Average   Grade\n");
    
    // Loop through all students
    for(int i=0; i<no_of_students; i++)
    {
        // Print roll number and name
        printf("%d  %s", s[i].roll_no, s[i].name);
        
        // Print marks of each subject
        for(int j=0; j<no_of_subjects; j++)
        {
            printf("   %d", s[i].marks[j]);
        }
        
        // Print average and grade
        printf("   %.2f   %c\n", s[i].average, s[i].grade);
    }
}

// Function to display particular student details
void display_particular(struct students s[], int no_of_students, int no_of_subjects, char **subject_name)
{
    int choice1;  // To choose search type
    
    // Menu for searching student
    printf("----Menu for Particular student----\n");
    printf("1. Name.\n");
    printf("2. Roll no.\n");
    printf("Enter you choice : ");
    scanf("%d", &choice1);
    
    // Search by name
    if(choice1 == 1)
    {
        char search[50];   // To store name to search
        
        printf("Enter the name of the student : ");
        scanf("%s", search);
        
        // Loop through students
        for(int i=0; i<no_of_students; i++)
        {
            // Compare entered name with student name
            if(strcmp(search, s[i].name) == 0)
            {
                // Print header
                printf("Roll No.   Name");
                for(int j=0; j<no_of_subjects; j++)
                {
                    printf("   %s", subject_name[j]);
                }
                printf("   Average   Grade\n");
                
                // Print student details
                printf("%d   %s", s[i].roll_no, s[i].name);
                
                for(int j=0; j<no_of_subjects; j++)
                {
                    printf("   %d", s[i].marks[j]);
                }
                
                printf("   %.2f   %c\n", s[i].average, s[i].grade);
            }
        }
    }
    
    // Search by roll number
    if(choice1 == 2)
    {
        int roll;   // Variable to store roll number
        
        printf("Enter the roll no of the student : ");
        scanf("%d", &roll);
        
        // Loop through students
        for(int i=0; i<no_of_students; i++)
        {
            // Check if roll number matches
            if(roll == s[i].roll_no)
            {
                // Print header
                printf("Roll No.   Name");
                for(int j=0; j<no_of_subjects; j++)
                {
                    printf("   %s", subject_name[j]);
                }
                printf("   Average   Grade\n");
                
                // Print student details
                printf("%d   %s", s[i].roll_no, s[i].name);
                
                for(int j=0; j<no_of_subjects; j++)
                {
                    printf("   %d", s[i].marks[j]);
                }
                
                printf("   %.2f   %c\n", s[i].average, s[i].grade);
            }
        }
    }
}

int main()
{
    int no_of_students;                                                         // To store number of students
    int no_of_subjects;                                                         // To store number of subjects
    
    // Take input for number of students
    printf("Enter no.of students : ");
    scanf("%d", &no_of_students);
    
    // Take input for number of subjects
    printf("Enter no.of subjects : ");
    scanf("%d", &no_of_subjects);
    
    // Declare array of structures
    struct students s[no_of_students];
    
    char **subject_name;                                                        // Pointer to store subject names dynamically
    
    // Allocate memory for subject names
    subject_name = malloc(no_of_subjects * sizeof(char*));
    
    // Allocate memory for each subject name
    for(int i=0; i<no_of_subjects; i++)
    {
       subject_name[i]=malloc(50 * sizeof(char));
    }
    
    // Read subject names
    for(int i=0; i<no_of_subjects; i++)
    {
        printf("Enter the name of subject %d : ",i+1);
        scanf("%s", subject_name[i]);
    }
    
    // Allocate memory for marks of each student
    for(int i=0; i<no_of_students; i++)
    {
        s[i].marks = malloc(no_of_subjects * sizeof(int));
    }
    
    printf("-----------Enter the student details----------\n");
    
    // Read student details
    for(int i=0; i<no_of_students; i++)
    {
        printf("Enter the student Roll no. : ");
        scanf("%d", &s[i].roll_no);
            
        printf("\nEnter the student %d name : ", i+1);
        scanf("%s",s[i].name);
        
        // Read marks for each subject
        for(int j=0; j<no_of_subjects; j++)
        {
            printf("\nEnter %s mark : ",subject_name[j]);
            scanf("%d",&s[i].marks[j]);
        }
    }
    
    // Calculate average and grade
    calculate(s, no_of_students, no_of_subjects);
    
    int choice;                                                                 // Menu choice
    char cont;                                                                  // Continue option
    
    // Menu loop
    do
    {
        printf("----Display Menu----\n");
        printf("1.All student details\n");
        printf("2.Particular student details\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1 :
                display_all(s, no_of_students, no_of_subjects, subject_name);
                break;
                
            case 2 :
                display_particular(s, no_of_students, no_of_subjects, subject_name);
                break;
        }
        
        // Ask user to continue
        printf("Do you want to continue to display(Y/y) : ");
        scanf(" %c", &cont);
        
    }while(cont=='Y' || cont=='y');
    
    return 0;                                                                   // End of program
}