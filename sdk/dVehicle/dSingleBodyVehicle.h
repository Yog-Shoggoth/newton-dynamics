/* Copyright (c) <2003-2016> <Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely
*/


#ifndef __D_SINGLE_BODY_VEHICLE_H__
#define __D_SINGLE_BODY_VEHICLE_H__

#include "dStdafxVehicle.h"
#include "dVehicleInterface.h"


class dSingleBodyVehicle: public dVehicleInterface
{
	public:
	DVEHICLE_API dSingleBodyVehicle(dVehicleChassis* const chassis);
	DVEHICLE_API virtual ~dSingleBodyVehicle();

	DVEHICLE_API dVehicleTire* AddTire (const dMatrix& locationInGlobalSpace, const dTireInfo& tireInfo);
};


#endif 

