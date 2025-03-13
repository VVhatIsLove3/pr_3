#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    int n = 6;
    int count = 0;
    float* b = (float*)malloc(n * sizeof(float));
    b[0] = -23;
    b[1] = 12;
    b[2] = 34;
    b[3] = 98.78;
    b[4] = -123.456;
    b[5] = 0.899;
    //printf("%f\n", c);
    for (int j=0; j<n; j++)
    {
        if(b[j]>=0)
            count++;
    }
    float *c=(float*)malloc(count*sizeof(float));
    int count_c=0;
    for (int i=0; i<n; i++)
    {
        if(b[i]>=0)
        {
            c[count_c]=(pow(b[i], 0.5)/5);
            count_c++;
        }
    }
    for (int i = 0; i<count_c; i++)
        printf("%f\n", c[i]);
    int minIdx;
    float temp;
    for (int i = 0; i < count_c - 1; i++) {
        minIdx = i;
        for (int j = i + 1; j < count_c; j++) {
            if (c[j] < c[minIdx]) {
                minIdx = j;
            }
        }
        // Меняем местами найденный минимальный элемент с текущим элементом
        temp = c[minIdx];
        c[minIdx] = c[i];
        c[i] = temp;
    }

    // Вывод отсортированного массива
    printf("Отсортированный массив:\n");
    for (int i = 0; i < count_c; i++) {
        printf("%f\n", c[i]);
    }
    free(b);
    free(c);
}

