#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Entry point
 * @d: struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initilaize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
