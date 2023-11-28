#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

/**
 * print_dog - Print information about a dog
 * @d: Pointer to the dog structure
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\nAge: %.2f\nOwner: %s\n", d->name, d->age, d->owner);
    }
}

/**
 * new_dog - Create a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_d = malloc(sizeof(dog_t));
    if (new_d == NULL)
    {
        return NULL; // Memory allocation failed
    }

    new_d->name = strdup(name); // Duplicate the name
    if (new_d->name == NULL)
    {
        free(new_d);
        return NULL; // Memory allocation failed
    }

    new_d->age = age;
    new_d->owner = strdup(owner); // Duplicate the owner
    if (new_d->owner == NULL)
    {
        free(new_d->name);
        free(new_d);
        return NULL; // Memory allocation failed
    }

    return new_d;
}

/**
 * free_dog - Free memory allocated for a dog structure
 * @d: Pointer to the dog structure
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}

/**
 * _strcpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
    {
        i++;
    }
    return dest;
}

/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}
