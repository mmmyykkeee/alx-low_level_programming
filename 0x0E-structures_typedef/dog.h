#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a simple dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a simple structure representing a dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * init_dog - initialize a dog structure
 * @d: pointer to the dog structure to initialize
 * @name: name to give the dog
 * @age: age to give the dog
 * @owner: owner to give the dog
 *
 * Description: initialize a dog structure with a given name, age, and owner
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - print a dog structure
 * @d: pointer to the dog structure to print
 *
 * Description: print a dog structure in a human-readable format
 */
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

