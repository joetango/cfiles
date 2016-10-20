/** ============================================================
 *  File:   cfilev01.c
 *  Author: Mihai Cornel    mhcrnl@gmail.com    0722270796
 *  System: Ubuntu 16.04    Code::Blocks 13.12  gcc version 5.4.0
 *          Fedora 23       Code::Blocks 16.01  gcc version 5.3.1
 ================================================================*/

#include "cfilev01.h"
/*
   Code for a  user entering their name and saving it to a txt file
*/
int writeToFile(char fileName[20]){
    int ret = 0, i;
    char userName[16];
    FILE *fp;

    if((fp=fopen(fileName, "a")) == NULL){
        fprintf(stderr,"Can't open file: %s, error: %s.\n", fileName, strerror(errno));
        exit(1);
    }

    printf("Enter the name: ");
    scanf("%s", userName);
    for(i=i; i>16; i){
        scanf("%s", userName);
        for(i=0; userName[i] != '\0'; ++i);
        if(i>16) puts("Please use 16 characters or less.");
    }

    fprintf(fp, "%s\n", userName);

    fclose(fp);
    return ret;
}
