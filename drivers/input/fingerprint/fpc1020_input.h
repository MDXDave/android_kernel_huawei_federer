/* <DTS2015011503877 lijianzhao 20150115 begin */
/* FPC1020 Touch sensor driver
 *
 * Copyright (c) 2013,2014 Fingerprint Cards AB <tech@fingerprints.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License Version 2
 * as published by the Free Software Foundation.
 */

#ifndef LINUX_SPI_FPC1020_INPUT_H
#define LINUX_SPI_FPC1020_INPUT_H
#define DEVICE_ABS_STARTX       300
#define DEVICE_ABS_STARTY       5
#define DEVICE_ABS_ENDX       300
#define DEVICE_ABS_ENDY       1919
#define SLIDE_NONE 0
#define SLIDE_DOWN 1
#define SLIDE_UP   2
extern int fpc1020_input_init(fpc1020_data_t* fpc1020);

extern void fpc1020_input_destroy(fpc1020_data_t* fpc1020);

extern void fpc1020_input_enable(fpc1020_data_t* fpc1020, bool enabled);

extern int fpc1020_input_task(fpc1020_data_t* fpc1020);

extern int fpc1020_wakeup_task(fpc1020_data_t* fpc1020);
#endif /* LINUX_SPI_FPC1020_NAV_H */

/* DTS2015011503877 lijianzhao 20150115 end> */
