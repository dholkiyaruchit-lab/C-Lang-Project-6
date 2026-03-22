#include<stdio.h>

int main()
{
    char str1[50];
    int i,j,count_;

    printf("Enter string: ");
    scanf("%s",str1);

    for(i=0; str1[i] != '\0'; i++)
    {
        if(str1[i] == '0')   
            continue;
        count_ = 1;
        for(j=i+1; str1[j] != '\0'; j++)
        {
            if(str1[i] == str1[j])
            {
                count_++;
                str1[j] = '0';  
            }
        }
        printf("%c = %d\n", str1[i], count_);
    }

    return 0;
}