#ifndef _DOG_
#define _DOG_
/**
 * struct dog - short description
 * @name: pointer to char
 * @age: float data type
 * @owner: pointer to char
 * Description: name is a string as name
 * of dog. age is age of dog. owner is
 * name of dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
