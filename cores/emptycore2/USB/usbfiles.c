//-I{asf.path}/asf/common/services/clock/{CHIPSERIES}

#include <parts.h>
//#include <board.h>
#include <conf_clock.h>
#include <conf_usb.h>

#include <common/services/clock/osc.h>
#include <common/services/clock/pll.h>

//#include <common/services/clock/sam4e/sysclk.c>
//#include <common/services/clock/sam4e/sysclk.c>
#include <common/services/clock/samg/sysclk.c>
#include <udp/udp_device.c>

#include <common/services/usb/udc/udc.c>
#include <common/utils/interrupt/interrupt_sam_nvic.c>
#include <udi_cdc.c>
#include <udi_cdc_desc.c>