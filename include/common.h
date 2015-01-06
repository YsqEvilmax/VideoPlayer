#pragma once
#include <stdlib.h>
template <class T>
void Delete(T* &t)
{
	delete t;
	t = NULL;
}

