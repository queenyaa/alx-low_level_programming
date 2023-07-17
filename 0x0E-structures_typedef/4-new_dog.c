#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length od string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies a string
 * including \0
 * @dest: pointer of destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age, second member
 * @owner: 3rd member
 * Return: pointer to ndog (success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*allocate memory for ndog*/
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/*allocate memory and copy new string*/
	new_dog->name = malloc(_strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	/*allocate memory and copy the owner string*/
	new_dog->owner = malloc(_strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	/*set the age of the ndog*/
	new_dog->age = age;

	return (new_dog);
}
