/*
 * Event.h
 *
 * Created: 2016/4/4 13:32:45
 *  Author: AB
 */ 


#ifndef _EVENT_H_
#define _EVENT_H_
#include <stdio.h>
#include "utilities/inc/llist.h"
#include "wrapper/base-class/inc/Base_Sensor.h"

enum DeviceState { New, Ready, Running, Terminated, Oops };
	
struct event 
{
	LL_PTRS;
	int timeout;
	int repeat_interval;
    int borrow_timeout;
	BaseSensor * sp;
	int info;
    enum DeviceState cur_state;
    int (* run)(struct event *);
};










#endif /* EVENT_H_ */