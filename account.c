//
// Created by olive on 14/10/2022.
//
#include "sbms.h"

/**
 * @param account_no
 * @return Row number in data
 */
int get_account(char account_no[12], char* file){
    FILE* fp = fopen(file, "r");

    if (!fp)
        printf("Can't open file\n");

    else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1024];

        int row = 0;
        int column = 0;

        while (fgets(buffer,
                     1024, fp)) {
            column = 0;
            row++;

            if (row == 1)
                continue;

            // Splitting the data
            char* value = strtok(buffer, ",");

            while (value) {

                // Column 3
                if (column == 2 && strcmp(value,account_no) == 0) {
                    return row;
                }

                value = strtok(NULL, ", ");
                column++;
            }
        }

        // Close the file
        fclose(fp);
    }
}

void add_account(char name[256], char dob[10], char* file){
    //TODO: PLEASE APPEND THE DATA TO THE EXISTING DATA STORAGE
}

void delete_account(int account_no[12]){
    //TODO: PLEASE REMOVE THE DATA FROM THE EXISTING DATA STORAGE
}

void view_account(int account_no[12], char* file){
    // Substitute the full file path
    // for the string file_path
    FILE* fp = fopen(file, "r");

    if (!fp)
        printf("Can't open file\n");

    else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1024];

        int row = 0;
        int column = 0;

        while (fgets(buffer,1024, fp)) {
            column = 0;
            row++;

            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (row == get_account(account_no, file)) {

                // Splitting the data
                char *value = strtok(buffer, ",");

                while (value) {

                    // Column 1
                    if (column == 0) {
                        printf("Name:");
                    }

                    // Column 2
                    if (column == 1) {
                        printf("\nDate of Birth:");
                    }

                    // Column 3
                    if (column == 2) {
                        printf("\nAccount No.:");
                    }

                    if (column == 3) {
                        printf("\nAmount ($):");
                    }

                    printf("%s", value);
                    value = strtok(NULL, ", ");
                    column++;
                }
                printf("\n");
            }
        }

        // Close the file
        fclose(fp);
    }
}

void view_all_accounts(char* file){
    // Substitute the full file path
    // for the string file_path
    FILE* fp = fopen(file, "r");

    if (!fp)
        printf("Can't open file\n");

     else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1024];

        int row = 0;
        int column = 0;

        while (fgets(buffer,
                     1024, fp)) {
            column = 0;
            row++;
            if(row!=1)
                printf("Account no %d.____________\n", row-1);

            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (row == 1)
                continue;

            // Splitting the data
            char* value = strtok(buffer, ",");

            while (value) {

                // Column 1
                if (column == 0) {
                    printf("Name:");
                }

                // Column 2
                if (column == 1) {
                    printf("\nDate of Birth:");
                }

                // Column 3
                if (column == 2) {
                    printf("\nAccount No.:");
                }

                if (column == 3) {
                    printf("\nAmount ($):");
                }

                printf("%s", value);
                value = strtok(NULL, ", ");
                column++;
            }

            printf("\n");
        }

        // Close the file
        fclose(fp);
    }
}
