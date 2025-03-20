#include <stdio.h>
#include <string.h>

//typedef char user[25];

/*
struct User
{
  char name[25];
  char password[12];
  int id;
};
*/

typedef struct {
  char name[25];
  char password[12];
  int id;
} User;

int typedefLesson()
{
  // typedef = reserved keyword that gives an existing datatype a "nickname"

  // Using just Struct
  //struct User user1 = {"Yuri", "password123", 123456789};
  //struct User user2 = {"Ricardo", "password321", 987654321};

  // Using Typedef with Struct
  User user1 = {"Yuri", "password123", 123456789};
  User user2 = {"Ricardo", "password321", 987654321};

  printf("%s\n", user1.name);
  printf("%s\n", user1.password);
  printf("%d\n", user1.id);

  printf("\n");

  printf("%s\n", user2.name);
  printf("%s\n", user2.password);
  printf("%d\n", user2.id);

  return 0;
}
