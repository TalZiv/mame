//============================================================
//
//  debugqt.h - SDL/QT debug window handling
//
//  Copyright (c) 1996-2010, Nicola Salmoria and the MAME Team.
//  Visit http://mamedev.org for licensing and usage restrictions.
//
//  SDLMAME by Olivier Galibert and R. Belmont
//
//============================================================

#pragma once

#ifndef __DEBUGGER_QT_H__
#define __DEBUGGER_QT_H__

#include "emu.h"
#include "debug_module.h"

class debugger_qt : public debug_module
{
public:
	// construction/destruction
	debugger_qt();
	virtual ~debugger_qt();

	virtual void init_debugger(running_machine &machine);
	virtual void wait_for_debugger(device_t &device, bool firststop);
	virtual void debugger_update();
	virtual void debugger_exit();

private:
	running_machine *m_machine;
};

extern const osd_debugger_type OSD_DEBUGGER_QT;

#endif /* __DEBUGGER_QT_H__ */
