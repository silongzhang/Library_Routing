#include"ESPPRC.h"

// Check whether this label can extend to vertex j.
bool Label_ESPPRC::canExtend(const int j) const {
	return !unreachable.test(j);
}

