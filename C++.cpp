#include <iostream>
        using namespace std;
        int main()
        {
            int c, b;
           double a;
           
            printf("input a,b ");
            scanf_s("%i %d", &c, &b);
            a = (c * c) - (b * b);
            printf("a^2 = ");
            printf("a*a = c*c - b*b=%lf\n", a);
            system("pause");
            return 0;

