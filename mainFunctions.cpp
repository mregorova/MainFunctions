#include <stdio.h>
#include <stdio.h>
#include <stdlib.h> 

int str_len(char* str1)
{
   int len = 0;
   for(int i = 0; str1[i] != '\0'; i++) 
   {
     len++;
   }
   return len;
   // printf("%d", len);
}

int str_cmp (char* str1, char* str2) 
{
  // printf s1
  // printf s2

  // 1 - strlen
  // 2 - strchr
  // 3 - puts

  for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
  {
    if (str1[i] != str2[i])
    {
      printf("Not similar :(");
       
      return 0;
    }
  }

  printf("It's OK");

  return 1;
}

int str_chr(char* str1, char c)
{
   int found = 0;
   for (int i = 0; str1[i] != '\0'; i++) 
   {
     if (str1[i] == c)
     {
        found = 1;
        // return &str[i];
     }
     if (found == 1)
     {
        printf("%c", str1[i]);
     }
   }

   return 1;
}

int puts(char* str1) 
{
    printf("%s\n", str1);

    return 1;
}

int str_copy(char* str1, char* str2)
{
    str2 = str1;

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 1;
}

int strn_copy(char* str1, char* str2, int n)
{
    for (int i = 0; i != n && str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
        //printf("%d", i);
    }
    printf("%s\n", str2);

    return 1;
}

int strn_cat(char* str1, char* str2, int n)
{
    int a = str_len(str1);
    for(int i = 0; i != n; i++)
    {
        str1[a+i] = str2[i];
    }

    printf("%s\n", str1);

    return 1;
}

char *strdup(char* str1) {
    size_t len = str_len(str1) + 1;    
    char* num = malloc(len);    

    if (num == NULL) 
    {
        return NULL;    
    }

    memcpy (num, str1, len);  

    return num;                      
}


int main()
{
    char str1[] = "Masha";
    char str2[] = "Mashs the best";
    char str3[80] = "       ";
    char c = 'h';

    //int a = str_len(str1);
    //printf("%d", a);

    //str_chr(str1, c);

    //puts(str2);

    //strn_copy(str1, str3, 3);

    strn_cat(str1, str2, 5);
}