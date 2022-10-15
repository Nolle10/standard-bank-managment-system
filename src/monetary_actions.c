//
// Created by olive on 15/10/2022.
//

#include "sbms.h"

void add_amount(char account_no[12], int amount, char *file) {
    int tmp_amount = atoi(get_account_column(account_no, 3, file));
    char* h;
   //printf("Adding %d to the account %s", amount, account_no);

    tmp_amount += amount;

    printf("DD%dDD", tmp_amount);

    sprintf(h, "%c", tmp_amount);


    //FIXME: NEEDS TO APPEND THE AMOUNT INTO THE CSV
    strcpy(get_account_column(account_no, 3, file), "asd");

    printf("New amount %s", get_account_column(account_no, 3, file));


}
void withdraw_amount(char account_no[12], int amount);
void transfer_amount(char dest_account_no[12], char src_account_no[12], int amount);
