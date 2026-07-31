#include <stdio.h>
#include <math.h>

struct Employee{
    char e_id[8];
    char name[20];
    float salary;
};

void getData(struct Employee *E){
    printf("Enter name: ");
    scanf("%19s", E->name);

    printf("Enter employee ID: ");
    scanf("%7s", E->e_id);
    
    printf("Enter salary: ");
    scanf("%f", &E->salary);
}


int main(){
    struct Employee Employees[5];

    for(int i=0; i<5; i++){
         printf("\nEnter data for Employee %d: \n", i+1);
        getData(&Employees[i]);  
    }

    struct Employee highest = Employees[0];
    for(int i=1; i<5; i++){
        if(Employees[i].salary > highest.salary){
            highest = Employees[i];
        }
    }
    
    printf("\nDetails of Employee with highest salary: \n");
    printf("Name: %s\n", highest.name);
    printf("Employee ID: %s\n", highest.e_id);
    printf("Salary: %.2f\n", highest.salary);

    return 0;
}