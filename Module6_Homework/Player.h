#pragma once
#include "PortableElectronics.h"


namespace module_6
{
	class Player final: public PortableElectronics
	{
		private:
			int _trackCount;
		public:
			Player(int powerConsumption, int operationTime, int trackCount);
			void GetCharacteristics() override;
			int GetTrackCount() const;
	};
}

