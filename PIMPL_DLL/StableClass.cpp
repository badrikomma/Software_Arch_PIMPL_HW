#include "framework.h"
#include "StableClass.h"
#include "SomeContainedClass1.h"
#include "SomeContainedClass2.h"

// Private implementation class definition
class StableClassImpl {
public:
    SomeContainedClass1* m_SomeContainedClass1;
    SomeContainedClass2* m_SomeContainedClass2;

    // New functionality
    int CalculateProduct() {
        return m_SomeContainedClass1->GetValue() * m_SomeContainedClass2->GetValue();
    }
};

StableClass::StableClass(void) : m_Impl(new StableClassImpl())
{
    m_Impl->m_SomeContainedClass1 = nullptr;
    m_Impl->m_SomeContainedClass2 = nullptr;
}

StableClass::~StableClass(void)
{
    delete m_Impl;
}

void StableClass::Method1(int i)
{
    // Method1 implementation
}

void StableClass::Method2(int i)
{
    // Method2 implementation
}

// Implementation of new functionality
int StableClass::CalculateProduct() {
    return m_Impl->CalculateProduct();
}
