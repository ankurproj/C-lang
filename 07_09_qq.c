#include <stdio.h>
void display(int x[2][3])
{

    for (int i = 0; i < 2; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {
            {
                printf("%d %d", i, j, x[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void)
{

    // initializing the 2-dimensional array

    int x[2][3] = {{{0, 1}, {2, 3}}, {{6, 7}, {8, 9}}};
    display(x);
}