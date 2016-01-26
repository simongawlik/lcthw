#include <stdio.h>

int main()
{
    int age;
    int height = 72;
    
    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);
    
    return 0;
}

/*
C ESCAPE CODES
\a	    07	Alarm (Beep, Bell)
\b	    08	Backspace
\f	    0C	Formfeed
\n	    0A	Newline (Line Feed); see notes below
\r	    0D	Carriage Return
\t	    09	Horizontal Tab
\v	    0B	Vertical Tab
\\	    5C	Backslash
\'	    27	Single quotation mark
\"	    22	Double quotation mark
\?	    3F	Question mark
\nnn	any	The character whose numerical value is given by nnn interpreted as an octal number
\xhh	any	The character whose numerical value is given by hh interpreted as a hexadecimal number

C FORMAT SEQUENCES
%c char single character
%d (%i) int signed integer
%e (%E) float or double exponential format
%f float or double signed decimal
%g (%G) float or double use %f or %e as required
%o int unsigned octal value
%p pointer address stored in pointer
%s array of char sequence of characters
%u int unsigned decimal
%x (%X) int unsigned hex value

%d	(print as a decimal integer)
%6d (print as a decimal integer with a width of at least 6 wide padded with spaces in front)
%06d (print as a decimal integer with a width of at least 6 wide padded with 0s in front)
%f	(print as a floating point)
%4f	(print as a floating point with a width of at least 4 wide)
%.4f	(print as a floating point with a precision of four characters after the decimal point)
%3.2f	(print as a floating point at least 3 wide and a precision of 2)

*/