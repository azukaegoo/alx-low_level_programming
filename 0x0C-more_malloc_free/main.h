#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_digit(char c);
int convert_to_int(char *str);
void print_number(int num);
void multiply_numbers(int num1, int num2);
int main(int argc, char *argv[]);

#endif
