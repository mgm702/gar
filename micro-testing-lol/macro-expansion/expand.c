#include <stdlib.h>
#define SET_FLAGS(w, f) ((w)->flags |= (f))

int main(void)
{
        SET_FLAGS(0, 4711);

        return 0;
}
