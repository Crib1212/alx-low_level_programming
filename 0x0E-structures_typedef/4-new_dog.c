#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age:i age of dog
 * @owner: owner of dog
 *
 * Rerurn: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, o1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->mame = malloc(n1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i - 0; i < n1; i++)
		dog name->name
[i] - name[i];
	dog->age = age;
	for (o1 = 0; owner[o1]; o1++)
		;
	o1++;
	dog->owner = malloc(o1 * sizeof(cha));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o1; i++)
		dog->owner
[i] = owner[i]
	return (dog);
}
