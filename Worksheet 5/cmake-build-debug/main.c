#include "people.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;


    char file_name[20] = "names_data.txt";
    person list_of_people[NUM_PEOPLE];

  //  printf("Enter name of file: ");
  //  scanf("%[^\n]", file_name);
   // printf("\n");

    file = fopen(file_name,"r");
    if (file == NULL)
    {
        printf("File does not exists in system or not found. \n");
    }

    while (!feof(file)){
        char str[100];
        for (int i = 0; i < NUM_PEOPLE; i++) {
            fgets(str,100,file);
            sscanf(str,"%s %lf %lf",list_of_people[i].name,&list_of_people[i].height,&list_of_people[i].weight);
  //          fscanf("%s %f %f",list_of_people[i].name,&list_of_people[i].height,&list_of_people[i].weight);
//            fscanf(" %s",list_of_people[i].name);
//            fscanf(" %f",&list_of_people[i].height);
 //           fscanf(" %f",&list_of_people[i].weight);
        }
    }

    display_array(list_of_people);

/*
    int person1;
    int person2;
    printf("Compare Height\n");
    printf("Num of person 1: ");
    scanf("%d", &person1);
    printf("Num of person 2: ");
    scanf("%d",&person2);
    printf("\n");

//By height
    if(compare_by_height((void *)&list_of_people[person1],(void *)&list_of_people[person2]) == 1 ){
        printf("%s is taller than %s\n",list_of_people[person1].name, list_of_people[person2].name);
    }
    else if (compare_by_height((void *)&list_of_people[person1],(void *)&list_of_people[person2]) == -1){
        printf("%s is taller than %s\n",list_of_people[person2].name, list_of_people[person1].name);
    }
    else{
        printf("%s is the same height as %s\n",list_of_people[person1].name, list_of_people[person2].name);
    }


//By weight

    int p1;
    int p2;
    printf("Compare Weight\n");
    printf("Num of person 1: ");
    scanf("%d",&p1);
    printf("Num of person 2: ");
    scanf("%d",&p2);
    printf("\n");

//By height
    if(compare_by_weight((void *)&list_of_people[p1],(void *)&list_of_people[p2]) == 1 ){
        printf("%s is heavier than %s\n",list_of_people[p1].name, list_of_people[p2].name);
    }
    else if (compare_by_weight((void *)&list_of_people[p1],(void *)&list_of_people[p2]) == -1){
        printf("%s is heavier than %s\n",list_of_people[p2].name, list_of_people[p1].name);
    }
    else{
        printf("%s is the same weight as %s\n",list_of_people[p1].name, list_of_people[p2].name);
    }

//By name


    printf("Compare Weight\n");
    printf("Num of person 1: ");
    scanf("%d",&p1);
    printf("Num of person 2: ");
    scanf("%d",&p2);
    printf("\n");

    if(compare_by_name((void *)&list_of_people[p1],(void *)&list_of_people[p2]) == 1 ){
        printf("%s sorts first compared to %s\n",list_of_people[p1].name, list_of_people[p2].name);
    }
    else if (compare_by_weight((void *)&list_of_people[p1],(void *)&list_of_people[p2]) == -1){
        printf("%s sort first compared to %s\n",list_of_people[p2].name, list_of_people[p1].name);
    }
    else{
        printf("%s  and %s are the same\n",list_of_people[p1].name, list_of_people[p2].name);
    }
*/

 //   qsort(list_of_people,NUM_PEOPLE, sizeof(person),compare_by_height);
  //  qsort(list_of_people,NUM_PEOPLE, sizeof(person),compare_by_weight);
   // qsort(list_of_people,NUM_PEOPLE, sizeof(person),compare_by_name);

    qsort(list_of_people,NUM_PEOPLE, sizeof(person),compare_by_name);
    display_array(list_of_people);

    //Alphabetically






    return 0;
}






//=====Display List of people======

void display_array(person *list_of_people){
    for (int i = 0; i < NUM_PEOPLE; i++) {

        printf("%d\n",i);
        printf("Name: %s\n",list_of_people[i].name);
        printf("Height: %f\n",list_of_people[i].height);
        printf("Weight: %f\n\n",list_of_people[i].weight);
    }
}


//=====Find Heaviest out of two===========

int compare_by_height(const void *first_p, const void *second_p){

    person *person1;
    person  *person2;

    person1 = (person *)first_p;
    person2 = (person *)second_p;

    if((person1 ->height) > (person2 ->height)){
        return 1;
    } else if((person1 ->height) < (person2 ->height)){

        return -1;
    } else{
        return 0;
    }

}


int compare_by_weight(const void *first_p, const void *second_p){

    person *person1;
    person  *person2;

    person1 = (person *)first_p;
    person2 = (person *)second_p;

    if((person1 ->weight) > (person2 ->weight)){
        return 1;
    } else if((person1 ->weight) < (person2 ->weight)){
        return -1;
    } else{
        return 0;
    }

}
int compare_by_name(const void *first_p, const void *second_p){

    person *person1;
    person  *person2;

    person1 = (person *)first_p;
    person2 = (person *)second_p;

    int check = strcmp(person1,person2);

    if(check > 0){
        return 1;
    } else if(check < 0){
        return -1;
    } else{
        return 0;
    }

}