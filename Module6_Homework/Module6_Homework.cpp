#include <iostream>
#include "IElectronics.h"
#include "Player.h"
#include "RobotVacuumCleaner.h"
#include "Microwave.h"

using namespace std;
using namespace module_6;


int main()
{
    setlocale(LC_ALL, "");
    IElectronics* storage[] =
    {
        new Player(300, 4, 8),
        new Microwave(1200, 8),
        new RobotVacuumCleaner(900, 7, 5)
    };
    bool isContinue = true;
    while (isContinue)
    {
        cout << "Выберите товар. 1 - плеер, 2 - микроволновка, 3 - робот пылесос, 0 - выйти" << endl;
        int choise;
        cin >> choise;
        switch (choise)
        {
            case 1:
                storage[0]->GetCharacteristics();
                break;

            case 2:
                storage[1]->GetCharacteristics();
                break;

            case 3:
                storage[2]->GetCharacteristics();
                break;
            case 0:
                isContinue = false;
                break;
            default:                
                break;
        }
    }
    delete storage[0];
    delete storage[1];
    delete storage[2];

    return 0;
}
