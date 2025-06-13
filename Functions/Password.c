#include <stdio.h>
#include <string.h>
#include <ctype.h>


int valid_password(char pass[10])
{
    int len = strlen(pass), has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;
    if(len > 16 || len < 8)
        return 0;
    for(int i = 0; i < len; i++)
    {
        if(isupper(pass[i]))
            has_upper = 1;
        else if(islower(pass[i]))
            has_lower = 1;
        else if(isdigit(pass[i]))
            has_digit = 1;
        else if(pass[i] == '$' ||  pass[i] == '#' || pass[i] == '&' ||  pass[i] == '@')
            has_special = 1;
        else if(isspace(pass[i]))
            return 0;
    }
    if(!has_upper || !has_upper || !has_lower || !has_digit || !has_special)
        return 0;
    return 1;
}

void evaluate(char pass[10])
{
    char string[10];
    scanf("%s", string);
    if(strcmp(pass, string) == 0)
        printf("Success login");
    else
    {
        printf("Try again : ");
        return evaluate(pass);
    }
}

int main ()
{
    char password[10];
    int set = 0;
    while(!set)
    {
        printf("Enter a valid password : ");
        scanf("%s", password);
        if(valid_password(password))
        {
            set = 1;
            printf("It is a valid password\n");
            printf("Enter again to confirm : ");
            evaluate(password);
        }
        else
            printf("Invalid password\n");
    }
    return 0;
}