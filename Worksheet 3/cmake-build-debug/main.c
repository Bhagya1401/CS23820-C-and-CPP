#include <stdio.h>
#include <string.h>


int main() {
/*
    //Task 1
    char character_array[30];
    printf("Enter word: ");
    scanf("%s", &character_array);
    printf("Size of array: ");
    printf("%d \n", sizeof(character_array));


    //Strlen
    printf("String length: ");
    printf("%d \n", strlen(character_array));

    //Change into %[]
    scanf("%[^\n]", &character_array);
    printf("%s \n", character_array);
    printf("%d \n", strlen(character_array));


    //Str join
    char string1[20];
    char string2[20];


    printf("Enter string1: ");
    scanf("%[^\n]", &string1);
    printf("Enter string2: ");
    scanf(" %[^\n]", &string2);
   // strcat(string1, " ");
    printf("%s \n", strcat(string1,string2));
    printf("Length of result string: ");
    printf("%d \n", strlen(strcat(string1,string2)));
    printf("Length of string1: ");
    printf("%d \n", strlen(string1));
    printf("Length of string2: ");
    printf("%d \n", strlen(string2));


    //Str compare
    char string1[20];
    char string2[20];
    int sort;


    printf("Enter string1: ");
    scanf("%[^\n]", &string1);
    printf("Enter string2: ");
    scanf(" %[^\n]", &string2);
  //  printf("%d \n",strcmp(string1,string2));
    sort = strcmp(string1,string2);
    if(sort < 0) {
        printf("String one sorts first");
    }
    else if (sort > 0 )
        printf("String two sorts first");
    else
        printf("String1 is the same as String2");
    return 0;



    FILE *file;


    char file_name[20];
    char search[12];
    char *file_line;



    printf("Enter name of file: ");
    scanf("%[^\n]", file_name);

    file = fopen(file_name,"r");
    if (file == NULL)
    {
        printf("File does not exists in system or not found. \n");
    }

    fscanf(file, " %[^\n]", file_line);
 //   printf("\n%s",file_line);



    do{
        char *tmp;
        int count = 0;
        int pos;

        printf("Enter search word: ");
        scanf(" %[^\n]", &search);

        //strcat(file_line;
        tmp = file_line;
      //  point = strstr(file_line,search);

        while (( file_line = strstr(file_line,search)) != NULL){



            pos = file_line - tmp;


            printf("Position of %s is %d \n",search,pos);
            count++;
            file_line++;
      //      printf("%d \n", count);
        }

        printf("%d \n", count);
        printf("If you wish to leave type exit: ");
        scanf(" %s \n", &search);


    } while (search != "exit");


    fclose(file);

*/

}
