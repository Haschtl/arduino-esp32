#ifndef _dsps_dotprod_platform_H_
#define _dsps_dotprod_platform_H_

#include "sdkconfig.h"

#ifdef CONFIG_IDF_TARGET_ARCH_XTENSA
#include <xtensa/config/core-isa.h>
#include <xtensa/config/core-matmap.h>
#endif


#if ((XCHAL_HAVE_FP == 1) && (XCHAL_HAVE_LOOPS == 1))

#define dotprod_f32_ae32_enabled  1
#define dotprode_f32_ae32_enabled 1

#endif // 

#if ((XCHAL_HAVE_LOOPS == 1) && (XCHAL_HAVE_MAC16 == 1))

#define dsps_dotprod_s16_ae32_enabled 1

#endif //

#endif // _dsps_dotprod_platform_H_
