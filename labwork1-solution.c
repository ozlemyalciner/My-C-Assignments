/* Name: Ozlem Yalciner
   Project: Labwork C Assignment-1*/
   
#include <stdio.h>

double CalculateA (char gender)
{
    double A;
    if (gender == 'M')
    {
        A = 37.5;
    }
    else if (gender == 'F')
    {
        A = 10;
    }
    
    return A;
}

double CalculateB (char gender)
{
    double A = CalculateA(gender);
    double B;
    
    if (gender == 'M')
    {
        B = 4 * A;
    }
    else if (gender == 'F')
    {
        B = 0.5 * A;
    }
    
    return B;
}

double CalculateC (int age, char gender)
{
    double A, B, C, K;
    A = CalculateA(gender);
    B = CalculateB(gender);
    
    if (age < 18)
    {
        K = A / 2;
    }
    else if (age >= 18 && age < 40)
    {
        K = A;
    }
    else if (age >= 40 && age < 65)
    {
        K = 2 * A;
    }
    else if (age >= 65)
    {
        K = 4 * A;
    }
    
    if (gender == 'M')
    {
        C = 4 * K - 0.25 * B;
    }
    else if (gender == 'F')
    {
        C = 2 * K - B;
    }
    
    return C;
}

int main()
{
    int age;
    char gender;

    printf("Enter your age and gender: ");
    scanf("%d %c" , &age, &gender);
    
    double A, B, C;
    A = CalculateA(gender);
    B = CalculateB(gender);
    C = CalculateC(age, gender);
    
    printf("%lf %lf %lf ", A, B, C);
}
