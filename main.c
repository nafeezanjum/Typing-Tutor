#include<stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int result;
    char s1[1024],s2[1024],x;
    fp=fopen("input.txt","r");
    while(!feof(fp))
    {
      fscanf(fp,"%s",s1);
    }
    printf("%s",s1);
    printf("\n");
    int i=0;
    while(x = getchar())
{
    if(x == '\n'||x == '\0')
       break;
    else
        {
            s2[i]=x;
            i++;
        }
}
s2[i]='\0';
    result = strcmp(s1, s2);
    if (result == 0)
        {
            printf("Strings are the same\n");
    }
    else
        {
            printf("string r not same");

    }
    printf("%d",result);
    fclose(fp);

}
