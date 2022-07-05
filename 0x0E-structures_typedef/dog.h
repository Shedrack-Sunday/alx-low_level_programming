#ifndef _dog
#define _dog
int _putchar(char c);
/**
 *struct dog - define a struct called dog.
 *@name:member 1.
 *@age:member 2.
 *@owner:member 3.
 *Description:define a struct and assign some properties.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *s);
#endif
