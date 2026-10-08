#include <stdio.h>

int main(){
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    for(int i=1; i<= numStudents; i++){
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

        if (marks>=70 && marks<=100){
            grade='A';
        } else if (marks>=60){
            grade='B';
        } else if (marks>=50){
            grade='C';
        } else if (marks>=40){
            grade='D';
        } else {
            grade='F';
        }

        printf("\n----------------------------------\n");
        printf("\tSTUDENT INFORMATION\t\n");
        printf("----------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40){
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
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

        // Determine grade using if-else if-else logic
        IF marks >= 70 AND marks <= 100 THEN
            SET grade = 'A'
        ELSE IF marks >= 60 THEN
            SET grade = 'B'
        ELSE IF marks >= 50 THEN
            SET grade = 'C'
        ELSE IF marks >= 40 THEN
            SET grade = 'D'
        ELSE
            SET grade = 'F'
        END IF

        // Display Student Information
        PRINT "----------------------------------"
        PRINT "       STUDENT INFORMATION        "
        PRINT "----------------------------------"
        PRINT "Registration No: ", regNo
        PRINT "Name: ", name
        PRINT "Marks: ", marks
        PRINT "Grade: ", grade

        // Determine Pass / Fail Status
        IF marks >= 40 THEN
            PRINT "Status: Passed"
        ELSE
            PRINT "Status: Failed"
        END IF

        PRINT "----------------------------------"
    END FOR
END
*/
