int main(void)
{
    char str[100];
    int value;

    printf("enter the string");
    scanf("%s",str);


   value = strcmp(str,"hi");
   if(value== 0)
    {
     printf("\nfound");
    }
    else
    printf("not found");
}
