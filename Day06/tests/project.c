#include <criterion/criterion.h>

char *my_strncpy(char *, char *, int);

Test(my_strncpy, copy)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_string)
{
    char dest[6] = {0};
    char my_dest[6] = {0};

    my_strncpy(my_dest, "Hello", 6);
    strncpy(dest, "Hello", 6);
    cr_assert_str_eq(my_dest, dest);
}