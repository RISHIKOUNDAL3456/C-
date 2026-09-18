#include <stdio.h>

int main()
{
    int empcode, d;
    int days_present, days_absent, days_leave;
    float DA, TA, HRA, gross_salary, per_day_salary, total_salary;

    printf("Enter employee code: ");
    scanf("%d", &empcode);

    printf("Enter your Designation:\n");
    printf("1. Manager\n");
    printf("2. Supervisor\n");
    printf("3. Clerk\n");
    scanf("%d", &d);

    switch(d)
    {
        case 1:
            printf("Enter the attendance data (present absent leave): ");
            scanf("%d %d %d", &days_present, &days_absent, &days_leave);

            printf("Attendance: %d present, %d absent, %d leave\n",
                   days_present, days_absent, days_leave);

            DA = 40000 * 0.03;
            TA = 40000 * 0.02;
            HRA = 40000 * 0.05;

            gross_salary = 40000 + DA + TA + HRA;
            per_day_salary = gross_salary / 30;

            total_salary = gross_salary - (days_absent * per_day_salary);

            printf("Basic Salary = %.2f\n", 40000.0);
            printf("DA = %.2f\n", DA);
            printf("TA = %.2f\n", TA);
            printf("HRA = %.2f\n", HRA);
            printf("Absent Deduction = %.2f\n",
                   days_absent * per_day_salary);
            printf("Total Salary = %.2f\n", total_salary);

            break;


        case 2:
            printf("Enter the attendance data (present absent leave): ");
            scanf("%d %d %d", &days_present, &days_absent, &days_leave);

            printf("Attendance: %d present, %d absent, %d leave\n",
                   days_present, days_absent, days_leave);

            DA = 40000 * 0.03;
            TA = 40000 * 0.02;
            HRA = 40000 * 0.05;

            gross_salary = 40000 + DA + TA + HRA;
            per_day_salary = gross_salary / 30;

            total_salary = gross_salary - (days_absent * per_day_salary);

            printf("Basic Salary = %.2f\n", 40000.0);
            printf("DA = %.2f\n", DA);
            printf("TA = %.2f\n", TA);
            printf("HRA = %.2f\n", HRA);
            printf("Absent Deduction = %.2f\n",
                   days_absent * per_day_salary);
            printf("Total Salary = %.2f\n", total_salary);

            break;


        case 3:
            printf("Enter the attendance data (present absent leave): ");
            scanf("%d %d %d", &days_present, &days_absent, &days_leave);

            printf("Attendance: %d present, %d absent, %d leave\n",
                   days_present, days_absent, days_leave);

            DA = 40000 * 0.03;
            TA = 40000 * 0.02;
            HRA = 40000 * 0.05;

            gross_salary = 40000 + DA + TA + HRA;
            per_day_salary = gross_salary / 30;

            total_salary = gross_salary - (days_absent * per_day_salary);

            printf("Basic Salary = %.2f\n", 40000.0);
            printf("DA = %.2f\n", DA);
            printf("TA = %.2f\n", TA);
            printf("HRA = %.2f\n", HRA);
            printf("Absent Deduction = %.2f\n",
                   days_absent * per_day_salary);
            printf("Total Salary = %.2f\n", total_salary);

            break;


        default:
            printf("Invalid designation\n");
    }

    return 0;
}