#include <stdio.h>

void PolaSatu() {
    int i = 1;
    while(i <= 100) {
        printf("%d\t", i);
        if(i % 10 == 0) {
            printf("\n");
        }
        i++;
    }
}

#include <stdio.h>

void PolaDua() {
    int i = 1;
    int j = 1;
    while (i <= 10) {
        j = i;
        while (j <= 100) {
            printf("%d\t", j);
            j += 10;
        }
        printf("\n");
        i++;
    }
}

void PolaTiga() {
    int i = 1;
    int j, count = 1;
    while(i <= 10) {
        if(i % 2 == 0) {
            j = count + 9;
            while(j >= count) {
                printf("%d\t", j);
                j--;
            }
        } else {
            j = count;
            while(j < count + 10) {
                printf("%d\t", j);
                j++;
            }
        }
        count += 10;
        printf("\n");
        i++;
    }
    printf("\n");
}

void PolaEmpat() {
    int rows = 100;
    int num1 = 1;
    int num2 = 20;
    int num3 = 21;
    int num4 = 40;
    int num5 = 41;
    int num6 = 60;
    int num7 = 61;
    int num8 = 80;
    int num9 = 81;
    int num10 = 100;

    int i = 0;
    while (i < rows / 10 && num1 <= 10) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
        num1++;
        num2--;
        num3++;
        num4--;
        num5++;
        num6--;
        num7++;
        num8--;
        num9++;
        num10--;
        i++;
    }
}

int main() {
    PolaSatu();
    printf("\n\n\n");
    PolaDua();
    printf("\n\n\n");
    PolaTiga();
    printf("\n\n\n");
    PolaEmpat();
    printf("\n");
    return 0;
}