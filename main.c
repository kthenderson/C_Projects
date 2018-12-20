//
//  LabSession_5
//  Date: 08/11/18
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NMAX 20

typedef struct dog {
    char name[NMAX];
    int age;
    char bark[5];
}Dog;

void barks(Dog *mydog, char name[], int n);

int main() {
    
    int n;
    char name[NMAX];
    
    printf("How many dogs do you have?\n");
    scanf("%d", &n);

    Dog *pmydog = NULL;
    pmydog = (Dog *) malloc (n*sizeof(Dog));
    
    if (pmydog == NULL) {
        printf("Out of memory!\n");
        return -1;
        
    }
    
    for (int i=0; i<n; i++){
        
        printf("What is the name of dog %d?\n", i+1);
        scanf("%s", pmydog[i].name);
    
        printf("What is the age of dog %d?\n", i+1);
        scanf("%d", &pmydog[i].age);
    
        printf("How does dog %d bark?\n", i+1);
        scanf("%s", pmydog[i].bark);
    }
    
    printf("Which dog would you like to know the bark of?\n");
    scanf("%s", name);
    
    
    barks(pmydog, name, n);
    
    return 0;
}

void barks(Dog *mydog, char name[], int n){
    
    for (int i=0; i<n; ++i){
        if (strcmp(name,mydog[i].name) == 0){
            printf("The dog %s, with age %d, says %s\n", mydog[i].name, mydog[i].age, mydog[i].bark);
        }
    }
    
}
