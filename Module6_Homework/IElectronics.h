#pragma once

namespace module_6
{

    class IElectronics
    {
        protected:
            int _powerConsumption;            
        public:
            /*IElectronics();*/
            IElectronics(int powerConsumption);
            virtual void GetCharacteristics() = 0;
            virtual ~IElectronics() = default;
            int GetPowerConsumption() const;            
    };
}

