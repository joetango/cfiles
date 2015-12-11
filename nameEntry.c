//Code for a  user entering their name and saving it to a txt file
//Written by Joe Dickerson.

#include <stdio.h>

int main ()
{

    //Declarations
    char userName[16];
    int i;
    FILE *f; //File pointer declaration

    printf("What is your name?\n");
    printf("(please enter 16 characters or less and no spaces)\nNAME:");
    scanf("%s" ,userName);
    
    for(i=0; userName[i]!='\0'; ++i); //Finds the length of the string userName and sets it to i

    if(i>16){
    printf("Please restart the program and only use 16 characters or less\n");
    }
    else{
	printf("You entered: %s\n" , userName);

	f = fopen("save.txt" , "w"); //Opens or creates file 
	fprintf(f, "%s\n" , userName); //Writes value of userName to file 
	fclose(f); //Closes file
    }
}//main 
