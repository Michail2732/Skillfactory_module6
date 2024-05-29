#pragma once
#include "IElectronics.h"

namespace module_6
{

	class ConsumerElectronics : public virtual IElectronics
	{
		private:
			int _size;
		public:
			ConsumerElectronics(int powerConsumption, int size);
			void GetCharacteristics() override;
			int GetSize() const;

	};
}

