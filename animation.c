#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "animation.h"

void print_animation(struct animation *an) {
    printf("%s: %df\n",an->name,an->length);
}

struct animation *new_animation(char* n, int l) {
    struct animation *an;

    an = malloc(sizeof(struct animation));
    strncpy(an->name,n,sizeof(an->name)-1);
    an->length = l;

    return an;
}

void change_length(struct animation *an, int l) {
    an->length = l;
}

void change_name(struct animation *an, char* n) {
    strncpy(an->name,n,sizeof(an->name)-1);
}
