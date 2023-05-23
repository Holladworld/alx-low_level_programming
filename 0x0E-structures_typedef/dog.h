#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that store infomation of a dog
 * @owner: owner of the dog
 * @age: age of the dog
 * @name: name of the dog.
 *
 * desc: struct called "dog" that stores its name, its age
 * and name of the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
