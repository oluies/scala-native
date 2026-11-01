#ifndef IMMIX_STATE_H
#define IMMIX_STATE_H

#include "Heap.h"
#include "shared/ThreadUtil.h"
#include "MutatorThread.h"
#include "immix_commix/GCRoots.h"
#include "stddef.h"

extern Heap heap;
extern Stack stack;
extern Stack weakRefStack;
extern BlockAllocator blockAllocator;
// The depot of recycled blocks: Heap_Recycle puts every partly free block
// here, and threads take them a magazine at a time (Allocator_newBlock).
extern Allocator recycleDepot;
extern mutex_t recycleDepotLock;
extern _Atomic(MutatorThreads) mutatorThreads;
extern SN_ThreadLocal MutatorThread *currentMutatorThread;
extern GC_Roots *customRoots;

#endif // IMMIX_STATE_H
