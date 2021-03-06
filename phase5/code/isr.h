// isr.h, 159

#ifndef _ISR_H_
#define _ISR_H_

void MyBzero(void *, int);
void SpawnISR(int, func_ptr_t);
void KillISR();
void ShowStatusISR();
void TimerISR();
void SleepISR(int);

int SemInitISR(int);
void SemWaitISR(int);
void SemPostISR(int);

void MsgSndISR();
void MsgRcvISR();

void IRQ7ISR();

#endif
