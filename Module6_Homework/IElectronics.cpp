#include "IElectronics.h"

namespace module_6
{
	/*IElectronics::IElectronics()
	{
		_powerConsumption = 0;
	}*/

	IElectronics::IElectronics(int powerConsumption) : _powerConsumption(powerConsumption)
	{	
	}

	int IElectronics::GetPowerConsumption() const
	{
		return _powerConsumption;
	}	
}