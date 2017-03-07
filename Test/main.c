#include <stdio.h>
#include <stdlib.h>

/*Töltsön fel egy egész típusú 100db elemet tartalmazó tömböt páros számokkal 100-tól növekvő értékkel!
Keresse meg a második legnagyobb értékű elemet a tömbben! Keresse meg a legkisebb elemet a tömbben!*/
int main()
{
    int a=0,o=-31313 ,max=-212212, tmb[100], k=100, min=21010101;

    for(a=0;a<100;a++)
    {
        if(k%2==0)
        {
            tmb[a]=k;
        }
        else
        {
            ++k;
            tmb[a]=k;
        }
        k++;
    }


    for(a=0;a<100;a++)
    {

        o=o<tmb[a]?tmb[a]:o;


        min=min<tmb[a]?min:tmb[a];

    }
    for(a=0;a<100;a++)
    {
        max=(max>tmb[a]||tmb[a]==o)&&max<o?max:tmb[a];
    }


    return 0;
}
