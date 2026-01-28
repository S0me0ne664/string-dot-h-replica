#include <stddef.h>
#include <assert.h>

// Deine Funktionen (oder binde den Header ein)
size_t my_strlen(const char *str);
char *my_strcpy(char *dst, const char *src);

int main() {
    // Test für my_strlen
    assert(my_strlen("Hello") == 5);
    assert(my_strlen("") == 0);   

}