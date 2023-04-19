//__________________________________________________________________


#include <stdio.h>
int main()
{
FILE *file;
char str[500];
if (file = fopen("FileHandling01.txt", "r"))
{
while (fscanf(file, "%s", str) != EOF)  // fscanf - used to read the file not entering the values
{
printf("%s", str);
}
}
else
{
printf("Error in opening file");
}
fclose(file);
return 0;
}