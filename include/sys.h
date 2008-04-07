/*    SCCS Id: @(#)sys.h      3.5     2008/01/30      */
/* Copyright (c) Kenneth Lorber, Kensington, Maryland, 2008. */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef SYS_H
#define SYS_H

#define E extern

E void NDECL(sys_early_init);

struct sysopt {
	char *support;	/* local support contact */
	char *recover;	/* how to run recover - may be overridden by win port */
	char *wizards;
	int   maxplayers;
};
E struct sysopt sysopt;

#endif /* SYS_H */

