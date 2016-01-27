#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;
    
    printf("You have %d bugs at the imaginary rate of %f.\n",
            bugs, bug_rate);
    
    long universe_of_defects = LONG_MAX; //1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n.",
            universe_of_defects);
    
    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", 
            expected_bugs);
            
    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n",
            part_of_universe);
            
    // this makes no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n",
            care_percentage);
    
    printf("test %c test\n", nul_byte);
    printf("DOUBLE_MAX:  %ld\n", LONG_MAX);
    printf("UDOUBLE_MAX: %lu\n", ULONG_MAX);
    printf("LONG_MAX:    %ld\n", LONG_MAX);
    printf("ULONG_MAX:   %lu\n", ULONG_MAX);
      
    return 0;
}

/*
1. Make the number you assign to universe_of_defects various sizes until you get 
   a warning from the compiler.
   Above 2147483647 you start to overflow an int and get to the smallest possible 
   number -2147483648.
   
2. What do these really huge numbers actually print out?
   They wrap around the storage capacity of an int and therefore start counting
   up from the smallest possible number as soon as they overflow the largest
   possible number.

3. Change long to unsigned long and try to find the number that makes that one 
   too big.
   The largest unsigned int is 
   
4. Go search online to find out what unsigned does.
   Unsigned restricts a numerical type to only have positive values. It also 
   doubles the range of numbers that can be expressed in the alotted memory 
   space.

5. Try to explain to yourself (before I do in the next exercise) why you can 
   multiply a char and an int.
*/