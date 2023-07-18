#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name of struct type
 * @name: name of first element
 * @age: name for second element
 * @owner: name for third element
*/
struct dog
{

	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * typedef struct dog dog_t - to define a new name type for struct dog
 * @dog_t: parameter name for new type name
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
