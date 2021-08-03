//---------------------------------------------------------------------------


#pragma hdrstop
#include "Die.h"
#include<stdlib.h>
#include<time.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
 Die::Die()
{
        srand(time(NULL));
}

Die::~Die()
{
        value=0;
}

void Die::RollDie()
{
        value=(rand()%6)+1;
}

int Die::DieValue()
{
        return value;
}