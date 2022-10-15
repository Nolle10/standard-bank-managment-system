#include "sbms.h"
#include "global.h"

int main() {
    //sets file path
    char* file = "C:\\Users\\olive\\CLionProjects\\sbms\\accounts.csv";

    view_account("1231231233", file);

    add_amount("1231231233", 42, file);

    view_account("1231231233", file);

    //add_amount("1231231232", 433);

    return 0;
}