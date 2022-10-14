//
// Author Oliver K. Svendsen
// Created 2022-10-14
//

#ifndef SBMS_SBMS_H
#define SBMS_SBMS_H

#include <stdio.h>
#include <string.h>
#include <conio.h>

//Account actions
void add_account(char name[256], char dob[10], char* file);
void delete_account(char account_no[12]);
void view_account(char account_no[12], char* file);
void view_all_accounts(char* file);
int get_account(char account_no[12], char* file);

//Withdraw and deposit actions
void add_amount(char account_no[12], int amount);
void withdraw_amount(char account_no[12], int amount);
void transfer_amount(char dest_account_no[12], char src_account_no[12], int amount);



#endif //SBMS_SBMS_H
