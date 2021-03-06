#ifndef GROUNDAREAWALL_H_
#define GROUNDAREAWALL_H_

/******************************************************************************/
/******************************************************************************/

#include "geometry.h"
//#include "render.h"

class CGroundArea;
	
/******************************************************************************/
/******************************************************************************/

class CGroundArea : public CGeometry
{
public:
    CGroundArea(const char* pch_name);
    ~CGroundArea();

	void SetColor(double fGrey);
	void GetColor(double *fGrey);

	void SetHeight ( double fHeight);
	void GetHeight ( double *fHeight);
	
	void SetCenter(dVector2 dCenter);
	void GetCenter(dVector2 *dCenter);

	void SetIntRadius(double fRadius);
	void GetIntRadius(double *fRadius);

	void SetExtRadius(double fRadius);
	void GetExtRadius(double *fRadius);

	char* GetName ( void );

	int GetObject() { return m_Object; }
	int SetObject(int _object) { m_Object = _object; }

private:
	float m_fGrey;
	dVector2 m_dCenter;
	float m_fIntRadius;
	float m_fExtRadius;
	float m_fHeight;
	char m_sName[20];

	// Object that it's "inside" the ground.
	// -1 - No object
	// 0  - red object
	// 1  - blue object
	// 2  - normal object
	int m_Object;
};

/******************************************************************************/
/******************************************************************************/

#endif
