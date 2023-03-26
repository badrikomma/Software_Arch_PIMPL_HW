#ifndef STABLECLASS_H
#define STABLECLASS_H

#include "PIMPLDLL_EXPORTS.h"
#include "BaseStableClass.h"

class StableClassImpl; // Forward declaration of the private implementation class

// This class is exported from the dll
class PIMPLDLL_API StableClass : BaseStableClass {
public:
	StableClass(void);
	~StableClass(void);

	void Method1(int i);
	void Method2(int i);

	// New functionality
	int CalculateProduct();

private:
	StableClassImpl* m_Impl;
};

#endif
