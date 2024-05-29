#include "RobotVacuumCleaner.h"
#include "ConsumerElectronics.h"
#include "PortableElectronics.h"
#include <iostream>

using namespace std;

namespace module_6
{
	RobotVacuumCleaner::RobotVacuumCleaner(int powerConsumption, int size, int operatingTime) : PortableElectronics(powerConsumption, operatingTime), ConsumerElectronics(powerConsumption, size), IElectronics(powerConsumption)
	{

	}

	void RobotVacuumCleaner::GetCharacteristics()
	{
		cout << "����� �������. ������������ ��������: " << _powerConsumption << ", ����� ������: " << GetOperatingTime() << ", ������: " << GetSize() << endl;
	}
}
