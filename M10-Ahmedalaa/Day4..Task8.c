#include <stdio.h>

/* Note:
;    Null Statement
z;  aw x+y;   has no effect

(int x); no error or warning ... el effect bt3ha fl statement de bas msh forever */
(int) x;

int main()
{
    unsigned char u8cnt=0; //esmaha kda bc naming convention

    for( u8cnt=0 ; u8cnt<=10 ; u8cnt++ )    //mmkn asheel ay section mn dool bas lazem a7ot el ;
        //el inf loop hya ene asheel kol haga khales fa el cond dayman true!! for( ; ; )
    {
        printf("%d \n", u8cnt);
    }

    /* law el for(u8cnt=10 ; u8cnt>0 ; u8cnt--)   hatetnafez asra3 ml loop el foo2 3ashan by-compare with 0 3ashan
    fe register aslan feh value el 0
    3ashan el value bta3et el condition btkoun saved el awel f invisible variable then btt7at 3aleha fa fl loop el tania de
    mafish hwar el invisible var de 3ashan el 0 kda kda saved*/

    return 0;
}
