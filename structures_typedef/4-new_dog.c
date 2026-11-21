#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a dog with copies of its name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t i, name_len = 0, owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
