#ifndef ANIMATION_H
#define ANIMATION_H

struct animation {
    char name[256]; 
    int length;
};
void print_animation(struct animation *an);
struct animation *new_animation(char* name, int length);
void change_length(struct animation *an, int length);
void change_name(struct animation *an, char* name);

#endif
