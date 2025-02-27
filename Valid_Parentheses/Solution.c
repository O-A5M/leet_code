#include <string.h>
#include <stdbool.h>

bool isValid(char* s)
{
   char store[strlen(s)];
   int  top;
   int  i;

   top = -1;
   i = 0;
   while(s[i]) 
   {
    if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        store[++top] = s[i];
    else
    {
        if (top == -1 ||
            s[i] == ')' && store[top] != '(' ||
            s[i] == '}' && store[top] != '{' ||
            s[i] == ']' && store[top] != '[')
            return (false);
        top--;
    }
    i++;
   }
   return (top == -1);
}
