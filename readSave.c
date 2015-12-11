//Documentation to fill in later

#include <stdio.h>

int main ()
{

    //Declaration 
    FILE *f; //File pointer declaration
    char userName[16];


    f = fopen("save.txt" , "r");
    fgets(userName, 16, f);
    
    printf("%s" , userName);

    fclose(f);

}//main
