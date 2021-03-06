//*****************************************************************************
// Part of Dvtk Libraries - Internal Native Library Code
// Copyright � 2001-2006
// Philips Medical Systems NL B.V., Agfa-Gevaert N.V.
//*****************************************************************************
#ifndef ACSE_RJ_SOURCE_H
#define ACSE_RJ_SOURCE_H

//*****************************************************************************
//  EXTERNAL DECLARATIONS
//*****************************************************************************
#include "ACSE_parameter.h"

//*****************************************************************************
//  CONSTANTS AND TYPE DEFINITIONS
//*****************************************************************************

//>>***************************************************************************

class ACSE_RJ_SOURCE_CLASS : public ACSE_PARAMETER_CLASS

//  DESCRIPTION     : Associate RJ Source class for ACSE parameter validation.
//  INVARIANT       :
//  NOTES           :
//<<***************************************************************************
{
public:
	ACSE_RJ_SOURCE_CLASS();
	~ACSE_RJ_SOURCE_CLASS();
	
protected:
	bool checkSyntax();
	
	bool checkRange();
	
	bool checkReference(string);
}; 

#endif /* ACSE_RJ_SOURCE_H */
