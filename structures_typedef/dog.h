#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog (char pointer).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (char pointer).
 *
 * Description: Defines the basic attributes for a dog object.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
