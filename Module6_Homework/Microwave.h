#pragma once
#include "ConsumerElectronics.h"

namespace module_6
{
	class Microwave final: public ConsumerElectronics
	{		
		public:
			Microwave(int powerConsumption, int size);
			void GetCharacteristics() override;
	};
}

