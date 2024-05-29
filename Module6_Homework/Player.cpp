#include "Player.h"
#include "PortableElectronics.h"
#include "IElectronics.h"
#include <iostream>

using namespace std;

namespace module_6
{		

	Player::Player(int powerConsumption, int operationTime, int trackCount) : PortableElectronics(powerConsumption, operationTime), IElectronics(powerConsumption)
	{
		_trackCount = trackCount;
	}

	void Player::GetCharacteristics()
	{
		cout << "Плеер. Потребляемая мощность: " << GetPowerConsumption() << ", время работы: " << GetOperatingTime()<< ", количество треков: "<< _trackCount << endl;
	}

	int Player::GetTrackCount() const
	{
		return _trackCount;
	}


}
