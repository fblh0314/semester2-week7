/* Compile & run this program and observe what happens */

#include <stdio.h>

void assign_values(int x[], int size)
{
    for (int i = 0; i < size; ++i) {
        x[i] = (i + 1) * (i + 1);
    }
}

int main(void)
{
    int data[10] = { 0 };
    assign_values(data, 10);
    printf("Done!\n");
    return 0;
}

