#pragma once
#include "IElectronics.h"

namespace module_6
{
	class PortableElectronics : public virtual IElectronics
	{
		private:
			int _operatingTime;
		public:
			PortableElectronics(int powerConsumption, int operatingTime);
			void GetCharacteristics() override;
			int GetOperatingTime() const;
	};
}

