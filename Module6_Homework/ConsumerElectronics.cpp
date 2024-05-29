#include "ConsumerElectronics.h"
#include <iostream>

using namespace std;

namespace module_6
{
	ConsumerElectronics::ConsumerElectronics(int powerConsumption, int size) : IElectronics(powerConsumption)
	{
		_size = size;
	}

	void ConsumerElectronics::GetCharacteristics() 
	{
		cout << "Бытовая электроника. Потребляемая мощность: " << _powerConsumption << ", размер: " << _size << endl;
	}
	int ConsumerElectronics::GetSize() const
	{
		return _size;
	}
}
