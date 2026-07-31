#include <stdio.h>

struct Student{
    char roll_no[8];
    char name[20];
    float cgpa;
};

void getData(struct Student *S){
    printf("Enter name: ");
    scanf("%19s", S->name);
    
    printf("Enter roll no: ");
    scanf("%7s", S->roll_no);
    
    printf("Enter CGPA: ");
    scanf("%f", &S->cgpa);
}

void printData(struct Student S, int i){
    printf("\nStudent %d:\n", i+1);
    printf("Name: %s\n", S.name);
    printf("Roll No: %s\n", S.roll_no);
    printf("CGPA: %.2f\n", S.cgpa);
}


void print_specific_data(struct Student S[], int n){
    for(int i = 0; i < n; i++){
        if(S[i].cgpa >= 8.0){
            printData(S[i], i);
        }
    }
}

int main(){
    int n = 5;
    struct Student Students[n];
    
    for(int i = 0; i < n; i++){
        printf("\nEnter data for Student %d: \n", i+1);
        getData(&Students[i]);
    }
    
    printf("\n--- Students with CGPA >= 8.0 ---\n");
    print_specific_data(Students, n);
    
    return 0;
}