#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Simon";
    char full_name[] = {
        'S', 'i', 'm', 'o', 'n',
         ' ', 'A', '.', ' ',
         'G', 'a', 'w', 'l', 'i', 'k', '\0'
    };
    
    areas[0] = 100;
    areas[1] = name[0];     // 83 is the ASCII value for 'S'
    name[0] = 'C';
    full_name[6] = '$';
    
    // WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n",
            sizeof(areas));
    printf("The number of ints in areas: %ld\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n",
            areas[0], areas[1]);
            
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n",
            sizeof(name));
    printf("The number of chars: %ld\n",
            sizeof(name) / sizeof(char));
            
    printf("The size of full_name (char[]): %ld\n",
            sizeof(full_name));
    printf("The number of chars: %ld\n",
            sizeof(full_name) / sizeof(char));
            
    printf("name=\"%s\" and full_name=\"%s\"\n",
            name, full_name);
    
    return 0;
}