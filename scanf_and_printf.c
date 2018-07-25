#include<stdio.h>


int main()
{
    
    int i;
    char s[16];
    printf("\nscanf() and printf() test:\n");
    printf("input string and i:\n ");
    scanf("%s %d",s,&i);
    printf("your input, string=%s, i=%d\n",s,i);  
    printf("\nputchar() and getchar() test:\n");
    printf("input a char:\n");
    char c =getchar();
    printf("the char you input: ");
    putchar(c);
    printf("\n");
    printf("\nputs() and gets() test:\n");
    char s2[16];
    printf("input a string:\n");
    gets(s2);
    printf("you enter: ");
    puts(s2);
    return 0;
}
