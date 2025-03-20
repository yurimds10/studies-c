#include <stdio.h>

// This is a comment
/*
   This
   is
   a
   multiline
   comment
*/

/*
  \a = alert
  \b = backspace
  \e = escape character
  \f = formfeed page break
  \n = newline
  \r = carriage return
  \t = horizontal tab
  \v = vertical tab
  \\ = backslash
  \' = single quote
  \" = double quotes
  \? = question mark
*/

int returnEscapeSequences() {
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
  return 0;
}