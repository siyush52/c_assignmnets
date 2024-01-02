#include <stdio.h>

// Address structure
struct Address {
    char area[50];
    int pinCode;
    char street[50];
};

// Employee structure with nested Address structure
struct Employee {
    char name[50];
    int employeeID;
    struct Address address;
};

int main() {
    // Declare an employee variable
    struct Employee employee;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter employee ID:\n ");
    scanf("%d", &employee.employeeID);

    // Input address details
    printf("Enter area: ");
    scanf("%s", employee.address.area);

    printf("Enter pin code: ");
    scanf("%d", &employee.address.pinCode);

    printf("Enter street: ");
    scanf("%s", employee.address.street);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Address: %s, %s, %d\n", employee.address.street, employee.address.area, employee.address.pinCode);

    return 0;
}
