#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monTab[10] = {1, 2, 9, 9, 2, 2, 1, 9, 6, 3};
    int freqTab[10] = {0,0,0,0,0,0,0,0,0,0}, valeurTab[10] = {0,0,0,0,0,0,0,0,0,0};
    int i, j, k, position, max, repeter = 0;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(monTab[i] == valeurTab[j])
            {
                repeter = 1;
                position = j;
            }
        }

        if(repeter == 0)
        {
            valeurTab[i] = monTab[i];
        }
        else
        {
            freqTab[position] += 1;
            repeter = 0;
        }

    }

    max = freqTab[0];

    for(k = 0; k<10; k++)
    {
        if(max <= freqTab[k])
        {
            position = k;
        }
    }

    printf("La valeur la plus grande est %d", valeurTab[position]);

    return 0;
}
