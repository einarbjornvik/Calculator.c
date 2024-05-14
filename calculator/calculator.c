#include <stdio.h>


int main()
{
    float tall1, tall2;
    int val;
    int val2;

    printf("skriv to tall: \n");
    scanf("%f %f", &tall1, &tall2);

    printf("1. + \n");
    printf("2. - \n");
    printf("3. * \n");
    printf("4. / \n");

    scanf("%d", &val);
    if (val == 1)
    {
        printf("%.1f + %.1f = %.1f\n", tall1, tall2, tall1 + tall2);

        printf("vil du lukke programmet? 1 for ja 2 for nei\n");
        scanf("%d", &val2);
        if (val2 == 1)
        {
            printf("ok lukker programmet");
            return 0;
        }

        if (val2 == 2)
        {
            printf("fuck you, lukker alikevel");
            return 0;
        }
    }

    else if (val == 2)
    {
        printf("%.1f - %.1f = %.1f\n", tall1, tall2, tall1 - tall2);

        printf("vil du lukke programmet? 1 for ja 2 for nei\n");
        scanf("%d", &val2);
        if (val2 == 1)
        {
            printf("ok lukker programmet");
            return 0;
        }

        if (val2 == 2)
        {
            printf("fuck you, lukker alikevel");
            return 0;
        }
    }

    else if (val == 3)
    {
        printf("%.1f * %.1f = %.1f\n", tall1, tall2, tall1 * tall2);


        printf("vil du lukke programmet? 1 for ja 2 for nei\n");
        scanf("%d", &val2);
        if (val2 == 1)
        {
            printf("ok lukker programmet");
            return 0;
        }
        
        if (val2 == 2)
        {
            printf("fuck you, lukker alikevel");
            return 0;
        }
    }

    else if (val == 4)
    {
        if (tall2, tall1 != 0)
        {
            printf("%.1f / %.1f = %.1f\n", tall1, tall2, tall1 / tall2);

            printf("vil du lukke programmet? 1 for ja 2 for nei\n");
            scanf("%d", &val2);
            if (val2 == 1)
            {
                printf("ok lukker programmet");
                return 0;
            }
        
            if (val2 == 2)
            {
                printf("fuck you, lukker alikevel");
                return 0;
            }
        }
        else
        {
            printf("du kan ikke dele med 0");
            
            printf("vil du lukke programmet? 1 for ja 2 for nei\n");
            scanf("%d", &val2);
            if (val2 == 1)
            {
                printf("ok lukker programmet");
                return 0;
            }
        
            if (val2 == 2)
            {
                printf("fuck you, lukker alikevel");
                return 0;
            }

        }

    }

}