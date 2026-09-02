/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# taken from MX4SIO driver for simplicity.
# all credits go to maximus32
*/

#ifndef SIO2MAN_HOOK_H
#define SIO2MAN_HOOK_H

#ifndef SIO2MAN_HOOK_SUPPORT_SET_INTR_HANDLER
#define SIO2MAN_HOOK_SUPPORT_SET_INTR_HANDLER 0
#endif

extern int sio2man_hook_init();
extern void sio2man_hook_deinit();

#if SIO2MAN_HOOK_SUPPORT_SET_INTR_HANDLER
extern void sio2man_hook_sio2_set_intr_handler(int (*handler)(void *userdata), void *userdata);
#endif

#endif
