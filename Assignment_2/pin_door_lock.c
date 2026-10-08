#include <stdio.h>
#include <unistd.h>

int main()
{
    int attempts=0;
    const int MAXATTEMPTS = 3;
    int correctPin=9898;
    int userPin;
    while (attempts<MAXATTEMPTS){
        printf("Enter user pin: \n");
        scanf("%d", &userPin);

        if (userPin==correctPin){
            int choice;
            printf("\n === Device Menu === \n");
            printf("1. Open Door \n");
            printf("2. Change Username \n");
            printf("3. Change Pin \n");
            printf("4. Exit \n");
            printf("Enter an option (1-4) \n(numbers only!):\n");
            scanf("%d", &choice);
            switch(choice) {
                case 1:
                    printf("Access granted. Door unlocked!\n");
                    break;
                case 2:
                    printf("Change username feature coming soon.\n");
                    break;
                case 3:
                    printf("Change PIN feature coming soon.\n");
                    break;
                case 4:
                    printf("Exiting system.\n");
                    break;
                default:
                    printf("Invalid option! Please try again.\n");
                    break;
            }
            break;
        } else{
            attempts++;
            int remaining = MAXATTEMPTS-attempts;
            if (remaining>0){
                printf("IncorrectPIN. You have %d remaining attempt(s).\n\n", remaining);
                if(userPin<1000){
                    printf("PIN is too short (must be 4 digits).\n\n");
                } else if (userPin>9999){
                    printf("PIN is too long (must be 4 digits).\n\n");
                }else {
                    printf("PIN is exactly 4 digits.\n\n");
                }
            } else {
                printf("\n System locked! Wait for 5 seconds...\n");
                for (int count=5; count>=1; count--){
                    printf("%d...\n", count);
                    sleep(1);
                }
                printf("You can try again now.\n");
                attempts=0;
              }

          }
    }
    return 0;
}
/*
BEGIN
    DECLARE attempts AS INTEGER = 0
    CONSTANT MAXATTEMPTS AS INTEGER = 3
    DECLARE correctPin AS INTEGER = 9898
    DECLARE userPin AS INTEGER

    WHILE attempts < MAXATTEMPTS DO
        PRINT "Enter user pin: "
        READ userPin

        IF userPin == correctPin THEN
            DECLARE choice AS INTEGER

            PRINT "=== Device Menu ==="
            PRINT "1. Open Door"
            PRINT "2. Change Username"
            PRINT "3. Change Pin"
            PRINT "4. Exit"
            PRINT "Enter an option (1-4) (numbers only!):"
            READ choice

            EVALUATE choice
                CASE 1:
                    PRINT "Access granted. Door unlocked!"
                CASE 2:
                    PRINT "Change username feature coming soon."
                CASE 3:
                    PRINT "Change PIN feature coming soon."
                CASE 4:
                    PRINT "Exiting system."
                DEFAULT:
                    PRINT "Invalid option! Please try again."
            END EVALUATE

            BREAK LOOP  // Exit PIN loop on successful pin entry

        ELSE
            INCREMENT attempts BY 1
            DECLARE remaining AS INTEGER = MAXATTEMPTS - attempts

            IF remaining > 0 THEN
                PRINT "Incorrect PIN. You have ", remaining, " remaining attempt(s)."

                IF userPin < 1000 THEN
                    PRINT "PIN is too short (must be 4 digits)."
                ELSE IF userPin > 9999 THEN
                    PRINT "PIN is too long (must be 4 digits)."
                ELSE
                    PRINT "PIN is exactly 4 digits."
                END IF

            ELSE
                PRINT "System locked! Wait for 5 seconds..."

                FOR count FROM 5 DOWNTO 1 DO
                    PRINT count, "..."
                    SLEEP 1 SECOND
                END FOR

                PRINT "You can try again now."
                SET attempts = 0  // Reset attempts after lockout penalty
            END IF
        END IF
    END WHILE
END
*/
