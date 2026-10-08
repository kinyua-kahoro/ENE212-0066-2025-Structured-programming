#include <stdio.h>

int main(){
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i=1; i<=numStudents; i++){
        int regNo;
        char name[50];
        int marks;
        char grade;

        printf("\n--- Enter Student Details %d ---\n", i);
        printf("Enter Registration Number: ");
        scanf("%d", &regNo);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Marks: ");
        scanf("%d", &marks);

        switch (marks/10){
            case 10:
            case  9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        printf("\n----------------------------------\n");
        printf("\tSTUDENT INFORMATION\t\n");
        printf("----------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        switch (grade) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                printf("Status: Passed\n");
                break;
            default:
                printf("Status: Failed\n");
                break;
        }
        printf("----------------------------------\n");
    }
    return 0;
}

/*
BEGIN
    DECLARE numStudents AS INTEGER

    PRINT "Enter the number of students: "
    READ numStudents

    FOR i FROM 1 TO numStudents DO
        DECLARE regNo AS INTEGER
        DECLARE name AS STRING
        DECLARE marks AS INTEGER
        DECLARE grade AS CHARACTER

        PRINT "Enter Student Details", i
        PRINT "Enter Registration Number: "
        READ regNo

        PRINT "Enter Name: "
        READ name

        PRINT "Enter Marks: "
        READ marks

        // Determine grade based on mark range (marks / 10)
        EVALUATE marks / 10
            CASE 10, 9, 8, 7:
                SET grade = 'A'
            CASE 6:
                SET grade = 'B'
            CASE 5:
                SET grade = 'C'
            CASE 4:
                SET grade = 'D'
            DEFAULT:
                SET grade = 'F'
        END EVALUATE

        // Display Student Information
        PRINT "----------------------------------"
        PRINT "       STUDENT INFORMATION        "
        PRINT "----------------------------------"
        PRINT "Registration No: ", regNo
        PRINT "Name: ", name
        PRINT "Marks: ", marks
        PRINT "Grade: ", grade

        // Determine Pass / Fail Status
        EVALUATE grade
            CASE 'A', 'B', 'C', 'D':
                PRINT "Status: Passed"
            DEFAULT:
                PRINT "Status: Failed"
        END EVALUATE

        PRINT "----------------------------------"
    END FOR
END
*/
