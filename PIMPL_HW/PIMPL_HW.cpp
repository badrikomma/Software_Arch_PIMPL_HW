// PIMPL_HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\PIMPL_DLL\StableClass.h"
#include "..\PIMPL_DLL\SomeContainedClass1.h"

int main()
{

    std::cout << "Hello World!\n";

    StableClass* m_StableClass = new StableClass();

    m_StableClass->Method1(1);

    SomeContainedClass1* m_SomeContainedClass1 = m_StableClass->GetSomeContainedClass1_Implementation();

}
