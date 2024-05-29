#pragma once
#include "PortableElectronics.h"
#include "ConsumerElectronics.h"


namespace module_6
{
	class RobotVacuumCleaner final : public PortableElectronics, ConsumerElectronics
	{
		public:
			RobotVacuumCleaner(int powerConsumption, int size, int operatingTime);
			void GetCharacteristics() override;

	};
}

