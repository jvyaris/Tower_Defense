#ifndef INCLUDED_ENGINE_UTILS_H
#define INCLUDED_ENGINE_UTILS_H

//====================================================================================================
// Filename:	Utils.h
// Created by:	Peter Chan
// Description:	Helper functions.
//====================================================================================================

//====================================================================================================
// Includes
//====================================================================================================

#include <string.h>

//====================================================================================================
// Inline Declarations
//====================================================================================================

namespace Utils
{

inline bool Compare(const char* str1, const char* str2)
{
	return strcmp(str1, str2) == 0;
}

} // namespace Utils

#endif // #ifndef INCLUDED_ENGINE_UTILS_H