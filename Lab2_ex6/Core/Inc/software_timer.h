/*
 * software_timer.h
 *
 *  Created on: Oct 19, 2022
 *      Author: HAU
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
void timer_run();
void setTimer0(int duration);
void setTimer1(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
