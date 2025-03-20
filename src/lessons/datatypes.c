#include <stdio.h>
#include <stdbool.h>

int dataTypes() {
  char a = 'C';      // single character    %c
  char a2 = 99;      // numeric value as character
  char b[] = "Yuri"; // array of characters %s

  float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
  double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

  bool e = false; // 1 byte (true = 1 or false = 0) %d

  char f = 100;          // 1 byte (-128 to + 127) %d or %c
  unsigned char g = 255; // 1 byte (0 to +255) %d or %c

  short int h = 32767;          // 2 bytes (-32,768 to +32,767) %d
  unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

  int j = 2147483648;     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 65535; // 4 bytes (0 to +4,294,967,295) %u
  
  long long int l = 9000000000000000000;           // (-9 quintillion to +9 quintillion) %llu
  unsigned long long int m = 1844670000000000000; // 8 bytes (0 to +18 quintillion) %llu

  printf("%c\n", a);   // char
  printf("%c\n", a2);  // numeric as character value
  printf("%s\n", b);   // character array
  printf("%f\n", c);   // float
  printf("%lf\n", d);  // double
  printf("%d\n", e);   // boolean
  printf("%c\n", f);   // char as numeric value
  printf("%c\n", g);   // unsigned char as numeric value
  printf("%d\n", h);   // short
  printf("%d\n", i);   // unsigned short
  printf("%d\n", j);   // integer
  printf("%u\n", k);   // unsigned integer
  printf("%llu\n", l); // long long integer
  printf("%llu\n", m); // unsigned long long integer

  return 0;
}
