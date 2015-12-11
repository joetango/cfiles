//Code to read the contents of "save.txt"
//Written by Joe Dickerson

#include <stdio.h>

int main ()
{

    //Declaration 
    FILE *f; //File pointer declaration
    char userName[16];


    f = fopen("save.txt" , "r"); //Opens save.txt
    fgets(userName, 16, f); //Obtains contents, puts it in char array "userName," and readit from file f

    printf("%s" , userName);

    fclose(f); //Closes file

}//main
