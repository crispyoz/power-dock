
onionPrint(ONION_SEVERITY_DEBUG, "   Pulsing ctrl pin: GPIO%d\n", ctrlGpio);

#ifndef _ONIONDEBUG_H_
#define _ONIONDEBUG_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


#ifdef __cplusplus
extern "C" {
#endif

void onionPrint(int verbosity, char *s, ...);

#ifdef __cplusplus
}
#endif
#endif // _ONIONDEBUG_H_
