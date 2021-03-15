#include <iostream>

#include <stdio.h>
#include <stdlib.h>

using namespace std;
#include "C_Partie.h"

C_Partie Game;
void Afficher();

int main()
{
    Game.Init();
    Afficher();
    Game.Deplacer();
    cout<<"\n"<<endl;
    Afficher();
    return 0;
}

void Afficher()
{
    int i;
    int j;

    for(i=1;i<9;i++)
    {
        printf("\n");

        for(j=1;j<9;j++)
        {
            printf("%3d",Game.Plateau[i][j]);
        }
    }
    cout<<endl;
    cout<<endl;
}
