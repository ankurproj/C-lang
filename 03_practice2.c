#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("\nEnter physics marks: ");
    scanf("%d", &physics);

    printf("\nEnter chemistry marks: ");
    scanf("%d",&chemistry);
    
    printf("\nEnter maths marks: ");
    scanf("%d", &maths);
    total = (physics + chemistry + maths) / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("\n your total percentage is %f and you are fail", total);
    }
    else
    {
        printf("\n your total percentage is %f and you are pass", total);
    }

    return 0;
}