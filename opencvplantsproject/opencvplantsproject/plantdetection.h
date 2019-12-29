#pragma once


#include <stdexcept>
#include <windows.h>
#include <iostream>

#ifdef BACKGROUNDSUBTRACTION_EXPORTS  
#define BACKGROUNDSUBTRACTION_EXPORTS_API __declspec(dllexport)   
#else  
#define BACKGROUNDSUBTRACTION_EXPORTS_API __declspec(dllimport)   
#endif  


namespace BackgroundSubtraction
{
	class Functions
	{
	public:
		// Returns a + b  
		static BACKGROUNDSUBTRACTION_EXPORTS_API void Initialize();

		// Returns a * b  
		static BACKGROUNDSUBTRACTION_EXPORTS_API BYTE* ProcessFrame();

	};
}