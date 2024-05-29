#include "Microwave.h"
#include "ConsumerElectronics.h"
#include <iostream>

using namespace std;

namespace module_6
{
	Microwave::Microwave(int powerConsumption, int size): ConsumerElectronics(powerConsumption, size), IElectronics(powerConsumption)
	{
	}

	void Microwave::GetCharacteristics()
	{
		cout << "Микроволновка. Потребляемая мощность: " << _powerConsumption << ", размер: " << GetSize() << endl;
	}

}
