#include <stdio.h>

int main()
{
    int raiz[4] = {-3, -1, -1,-1};
    int raiz2[2] = {-3, -1};
    int raiz2found[2]={0,0};
    int varSearch;

    for (size_t i = 0; i < 2; i++)
    {
        varSearch=raiz2[i];
        for (size_t j = 0; j < 4; j++)
        {
            if (varSearch==raiz[j])
            {
                raiz2found[i]=1+raiz2found[i];
            }
            
        }
    }
    printf("%d\n",raiz2found[0]);
    printf("%d\n",raiz2found[1]);
}
