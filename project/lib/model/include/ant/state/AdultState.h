//
// Created by Antoine Guespin on 13/12/2022.
//

#ifndef ANT_SIMULATION_ADULTSTATE_H
#define ANT_SIMULATION_ADULTSTATE_H

#include "AntState.h"

namespace AntState {

    class AdultState : public AntState {
    public:
        EnumAntState getState() final;
    };

} // AntState

#endif //ANT_SIMULATION_ADULTSTATE_H
