#ifndef DOG_H
#define DOG_H

/**
 * struct dog -The structure of our doggo
 * @name: Doggo's name
 * @age: Doggo's age
 * @owner: Doggo's owner
 * Description: data structure for the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
