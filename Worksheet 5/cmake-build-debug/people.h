//
// Created by bhagy on 19/11/2021.
//

#ifndef WORKSHEET_5_PEOPLE_H
#define WORKSHEET_5_PEOPLE_H

#define NUM_PEOPLE 50
typedef struct person_info{
    char name[20];
    double height;
    double weight;
}person;

void display_array(person *list_of_people);

int compare_by_height(const void *first_p, const void *second_p);

int compare_by_weight(const void *first_p, const void *second_p);

int compare_by_name(const void *first_p, const void *second_p);

//void qsort(person, NUM_PEOPLE ,sizeof(person), &compare){};


#endif //WORKSHEET_5_PEOPLE_H

