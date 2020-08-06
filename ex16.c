#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
};

struct Person *Person_create(char *name, int age) {
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);
    who->name = strdup(name);
    who->age = age;

    return who;
}

void Person_destroy(struct Person *who) {
    assert(who != NULL);
    free(who->name);
    free(who);
}

void print_person(struct Person *who) {
    printf("Name is %s \n", who->name);
    printf("Age is %d \n", who->age);
}

int main(int argc, char *argv[]) {
    struct Person *jimmy = Person_create("Jimmy", 46);
    struct Person *alex = Person_create("Alex", 100);
    printf("Location in memory for Jimmy %p \n", jimmy);
    print_person(jimmy);
    print_person(alex);
    
    jimmy->age += 20;
    alex->age += 20;

    print_person(jimmy);
    print_person(alex);
    Person_destroy(jimmy);
    Person_destroy(alex);

    return 0;
}


