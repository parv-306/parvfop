
#include<stdio.h>
#include<string.h>
struct employee {
    char name[20];
    char designation[20];
    char gender[10];
    char date_of_joining[20];
    float salary;
};
int main() {
    struct employee emp[100];
    int n, i, count_male = 0, count_female = 0, count_salary = 0, count_asst_manager = 0, count_joining = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter the name of employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter the designation of employee %d: ", i+1);
        scanf("%s", emp[i].designation);
        printf("Enter the gender of employee %d: ", i+1);
        scanf("%s", emp[i].gender   );
        printf("Enter the date of joining of employee %d (dd/mm/yyyy): ", i+1);
        scanf("%s", emp[i].date_of_joining);
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%f", &emp[i].salary);
    }
    
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "male") == 0) {
            count_male++;
        } else if(strcmp(emp[i].gender, "female") == 0) {
            count_female++;
        }
        if(emp[i].salary > 10000) {
            count_salary++;
        }
        if(strcmp(emp[i].designation, "ASST manager") == 0) {
            count_asst_manager++;
        }
        if(strcmp(emp[i].date_of_joining, "01/01/2015") < 0) {
            count_joining++;
        }
    }       
    
    printf("Total number of employees: %d\n", n);
    printf("Number of male employees: %d\n", count_male);
    printf("Number of female employees: %d\n", count_female);
    printf("Number of employees with salary more than 10000: %d\n", count_salary);
    printf("Number of employees with designation 'ASST manager': %d\n", count_asst_manager);
    printf("Number of employees who joined before 1/1/2015: %d\n", count_joining);

    return 0;



} 



    







