# include <stdio.h>
 

void reverse(char *str)
{
  if (*str)
  {
    reverse(str + 1);
    printf("%c", *str);
  }
}
 

int main()
{
  char a[] = "ankit kanzariya";
  reverse(a);
  return 0;
}
