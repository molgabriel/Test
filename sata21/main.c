#include <stdio.h>
#include <stdlib.h>
/*Töltsön fel egy egész típusú 100 db elemet tartalmazó tömböt 5-tel és 7-tel
maradék nélkül osztható számokkal 100-tól növekvő értékkel!
Adja össze a páratlan számú indexen levő elemek értékét!
 Vegye az átlagát a páros indexen levő tömb elemeknek!*/
int main()
{
    int a=0,tmb[100], k=100, o=0, avg=0;


    for(a=0;a<100;a++)
    {
        if(k%5==0 && k%7==0)
        {
            k++;
            tmb[a]=k;

            }
    }

    for(a=0;a<100;a++)
    {

        if(a%2!=0) {
            o=tmb[a]+o;
        }
        else {
            avg=avg+tmb[a];
        }
    }


    return 0;
}

