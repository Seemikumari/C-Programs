#include<stdio.h>
void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
   // char str[]={'s','e','e','m','i','\0'}; //null terminated character array 
    //char str[]="seemi";
    char str[30];
    gets(str);
    printf("using custom function printStr \n");
    printStr(str);
    printf("using printf %s\n", str);
    printf("using puts: \n");
    puts(str);//with scanf also we can get the string but we won't be able to capture white spaces
    return 0;
}