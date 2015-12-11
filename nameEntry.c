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
    printf("NAME:");
  


    //OLD METHOD, leaving it here for now
    // scanf("%s" ,userName); 
    // for(i=0; userName[i]!='\0'; ++i); //Finds the length of the string userName and sets it to i



    //The point of the loop and if statement is so if the user inputs too many characters, rather than close the program 
    //the user will just get another scanf
    for(i=i;i>16;i){
	scanf("%s" ,userName); //User input
	for(i=0; userName[i]!='\0'; ++i); //Makes length of string integer and sets it to i
	if (i>16){ 
	    printf("Please use 16 characters or less.\n");
	}
    }
   
	printf("You entered: %s\n" , userName);

	f = fopen("save.txt" , "w"); //Opens or creates file 
	fprintf(f, "%s\n" , userName); //Writes value of userName to file 
	fclose(f); //Closes file
    
}//main 
