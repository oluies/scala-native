#if defined(SCALANATIVE_GC_IMMIX)

#include "State.h"

Heap heap = {};
Stack stack = {};
Stack weakRefStack = {};
BlockAllocator blockAllocator = {};
Allocator recycleDepot = {};
mutex_t recycleDepotLock;
_Atomic(MutatorThreads) mutatorThreads = NULL;
SN_ThreadLocal MutatorThread *currentMutatorThread = NULL;
GC_Roots *customRoots = NULL;

#endif
