// entry.h, 159

#ifndef _ENTRY_H_
#define _ENTRY_H_

#include <spede/machine/pic.h>

// Hardware interrupts
#define TIMER_INTR 0x20 // IRQ 0
#define IRQ3_INTR 0x23 // IRQ 3: UART RS232, COM2/4/6/8 (DOS names)
#define IRQ4_INTR 0x24 // IRQ 4: UART RS232, COM1/3/5/7 (DOS names)
#define IRQ7_INTR 0x27 // IRQ 7: Printer

// Software interrupts
#define GETPID_INTR 0x30
#define SLEEP_INTR 0x31
#define SPAWN_INTR 0x32
#define SEMINIT_INTR 0x33
#define SEMWAIT_INTR 0x34
#define SEMPOST_INTR 0x35
#define MSGSND_INTR 0x36
#define MSGRCV_INTR 0x37
#define FORK_INTR 0x38
#define WAIT_INTR 0x39
#define EXIT_INTR 0x3A

#define SEL_KCODE 0x08    // kernel's code segment
#define SEL_KDATA 0x10    // kernel's data segment
#define KERNEL_STACK_SIZE 8192  // kernel's stack size, in chars

// ISR Entries
#ifndef ASSEMBLER

__BEGIN_DECLS

#include "types.h" // for tf_t below

void TimerEntry();     // code defined in entry.S
void Loader(tf_t *);   // code defined in entry.S
void GetPidEntry();
void SleepEntry();

void SpawnEntry();
void SemInitEntry();
void SemWaitEntry();
void SemPostEntry();

void MsgSndEntry();
void MsgRcvEntry();

void IRQ3Entry();
void IRQ4Entry();
void IRQ7Entry();

void ForkEntry();
void WaitEntry();
void ExitEntry();
__END_DECLS

#endif

#endif
