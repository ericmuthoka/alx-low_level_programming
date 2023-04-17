#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */
typedef struct {
    char* name;
    float age;
    char* owner;
} dog_t;

dog_t* new_dog(char* name, float age, char* owner) {
    dog_t* new_dog = malloc(sizeof(dog_t));
    if (!new_dog) {
        return NULL; // memory allocation failed
    }

    // allocate memory for name and owner strings
    new_dog->name = malloc(strlen(name) + 1);
    new_dog->owner = malloc(strlen(owner) + 1);
    if (!new_dog->name || !new_dog->owner) {
        free(new_dog); // free the previously allocated memory
        return NULL; // memory allocation failed
    }

    // copy the name and owner strings
    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}

