#ifndef TESTREDLIGHTEXP_H
#define TESTREDLIGHTEXP_H

/******************************************************************************/
/******************************************************************************/

#include "experiment.h"

/******************************************************************************/
/******************************************************************************/

class CTestRedLightExp : public CExperiment
{
public:
    CTestRedLightExp(const char* pch_name, const char* paramsFile);

protected:
    // Overwritten from the superclasses:
    CArena* CreateArena();
		void AddActuators(CEpuck* pc_epuck);
    void AddSensors(CEpuck* pc_epuck);
    void SetController(CEpuck* pc_epuck);
    void CreateAndAddEpucks(CSimulator* pc_simulator);
    
private:
    int m_nRobotsNumber;
		int m_nLightObjectNumber;
		dVector2 *m_pcvLightObjects;
};

/******************************************************************************/
/******************************************************************************/

#endif
