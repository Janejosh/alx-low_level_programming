#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A program that define a dog's information
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - The typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
