#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phonebook_opt.h"

/* Sequential Search*/
entry *findName(char lastName[], entry *pHead)
{
    while (pHead != NULL ) {
        if (strcasecmp(lastName, pHead->lastName) == 0) {
            return pHead ;
        }
        pHead = pHead -> pNext ;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    e -> pNext = (entry *) malloc(sizeof(entry)) ;
    e = e -> pNext ;
    strcpy(e->lastName, lastName);
    e -> pNext = NULL ;
    return e ;
}
