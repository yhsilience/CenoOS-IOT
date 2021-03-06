/**
 *	Ceno RTOS task 
 * 	
 * 2018-12-17 
 * neroyang
 * 
 * Copyright (C) 2018 CenoCloud. All Rights Reserved 
 *
 * Contract Information：
 * nerosoft@outlook.com
 * https://www.cenocloud.com
 */
#ifndef __CENO_RTOS_TASK_H__
#define __CENO_RTOS_TASK_H__

typedef void (*os_task_handler_t)();

typedef	enum task_state{
 	OS_STATE_DORMANT 		=	1,
	OS_STATE_READY 			= 	2,
	OS_STATE_BLOCKED 		= 	3,
	OS_STATE_RUNNING 		= 	5,
	OS_STATE_PENDING 		= 	4,
	OS_STATE_INTERRUPTED 	= 	4
}task_state_t;

typedef struct os_task{
	os_task_id_t 	id;
	os_obj_t obj;

	cpu_stk_t 		stkPtr;
	cpu_stk_size_t 		stackSize;
	os_task_handler_t taskHandler;

	task_state_t 		state;		// 32 bit maybe more, but can be faster.
	os_time_t 		timeout;
	priority_t 		priority;

	os_list_t taskList;

}os_task_t;

os_err_t os_task_create(os_task_t *me,
					cpu_char_t *name, 
					priority_t priority, 
					cpu_stk_t stkPtr, 
					cpu_stk_size_t stackSize,
					os_task_handler_t taskHandler);

os_err_t os_task_switch_next(void);

os_err_t os_task_switch_context(os_task_t *next);

os_err_t os_task_exit(void);


#endif // !__CENO_RTOS_TASK_H__





