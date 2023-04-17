#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - a dog's profile
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
    void (*init_dog)(struct dog *, char *, float, char *);
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

