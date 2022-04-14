#ifndef _LP_SOURCE_H
#define _LP_SOURCE_H

#include "trf_def.h"
#include "trf_ncp.h"
#include "trf.h"

#include "lp_trf_server.h"
#include "lp_retrieve.h"
#include "lp_log.h"
#include "lp_types.h"
#include "lp_convert.h"
#include "lp_msg.h"
#include "lp_utils.h"

#include <getopt.h>
#include <errno.h>
#include <pthread.h>
#include <signal.h>
#include "common/framebuffer.h"
#include "lp_msg.pb-c.h"

/**
 * @brief Handle Client Request
 * 
 * @param ctx       Context to use
 */
int lpHandleClientReq(PLPContext ctx);

/**
 * @brief  Get the current cursor position and update the client side
 * @param  arg      PTRFContext to use for the connections
 * 
 */
void * lpHandleCursorPos(void * arg);

#endif