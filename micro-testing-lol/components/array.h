/* 	dynamicArray_a1.h : Dynamic Array implementation. */
#ifndef DYNAMIC_ARRAY_INCLUDED
#define DYNAMIC_ARRAY_INCLUDED 1

// TODO: Extract to helper functions
# ifndef LT
# define LT(A, B) ((A) < (B))
# endif

// TODO: Extract to helper functions
# ifndef EQ
# define EQ(A, B) ((A) == (B))
# endif

typedef struct DynArr DynArr;

/* Dynamic Array Functions */
void initDynArr(DynArr *v, int capacity);
DynArr *newDynArr(int cap);

void freeDynArr(DynArr *v);
void deleteDynArr(DynArr *v);

int sizeDynArr(DynArr *v);

void addDynArr(DynArr *v, TYPE val);
TYPE getDynArr(DynArr *v, int pos);
void putDynArr(DynArr *v, int pos, TYPE val);
void swapDynArr(DynArr *v, int i, int  j);
void removeAtDynArr(DynArr *v, int idx);

/* Stack interface. */
int isEmptyDynArr(DynArr *v);
void pushDynArr(DynArr *v, TYPE val);
TYPE topDynArr(DynArr *v);
void popDynArr(DynArr *v);

/* Bag Interface */
/* Note addDynArr is already declared above*/
int containsDynArr(DynArr *v, TYPE val);
void removeDynArr(DynArr *v, TYPE val);

#endif