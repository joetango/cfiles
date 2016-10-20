/** ============================================================
 *  File:   main.c
 *  Author: Mihai Cornel    mhcrnl@gmail.com    0722270796
 *  System: Ubuntu 16.04    Code::Blocks 13.12  gcc version 5.4.0
 *          Fedora 23       Code::Blocks 16.01  gcc version 5.3.1
 ================================================================*/

#include <stdio.h>
#include <stdlib.h>

#include "cfilev01.h"

int main()
{
    printf("Hello world from program!\n");
    char fileName[20];

    printf("Enter the name of file (namefile.txt): ");
    scanf("%s", fileName);
    writeToFile(fileName);

    return 0;
}
