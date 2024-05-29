#include "PortableElectronics.h"
#include <iostream>

using namespace std;


namespace module_6
{
	PortableElectronics::PortableElectronics(int powerConsumption, int operatingTime): IElectronics(powerConsumption)
	{
		_operatingTime = operatingTime;
	}

	void PortableElectronics::GetCharacteristics()
	{
		cout << "����������� �����������. ������������ ��������: " << _powerConsumption << ", ����� ������: " << _operatingTime << endl;
	}
	int PortableElectronics::GetOperatingTime() const
	{
		return _operatingTime;
	}
}
