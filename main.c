#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "animation.h"

int main() {
    srand(time(NULL));

    char *name = "test_animation";
    int len = rand();
    struct animation *an = new_animation(name, len);

    printf("animation with random length (in frames):\n\t");
    print_animation(an);
    printf("\n");

    printf("change length to 5f:\n\t");
    change_length(an, 5);
    print_animation(an);
    printf("\n");

    printf("change name to uair:\n\t");
    change_name(an, "uair");
    print_animation(an);

    free(an);

    return 0;
}
