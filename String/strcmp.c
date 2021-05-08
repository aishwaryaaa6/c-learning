int main(void)
{
    char str[100];
    int value;

    printf("enter the string");
    scanf("%s",str);
    // other way of comparing
    /*if(strcmp(str,"hi") == 0)
    {
        printf("found");
    }*/


   value = strcmp(str,"hi");
   if(value== 0)
    {
     printf("\nfound");
    }
    else
    printf("not found");
}
