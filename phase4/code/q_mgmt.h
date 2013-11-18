// q_mgmt.h, 159

#ifndef _Q_MGMT_H_
#define _Q_MGMT_H_

#include "types.h" // defining q_t needed below

int EmptyQ(q_t *);
int FullQ(q_t *);
void InitQ(q_t *);
int DeQ(q_t *);
void EnQ(int, q_t *);
int MsgQFull(msg_q_t *);
int MsgQEmpty(msg_q_t *);
void EnQMsg(msg_t *, msg_q_t *);
msg_t *DeQMsg(msg_q_t *);

<<<<<<< HEAD
=======
void MyBZero(char *, int);
void MyStrCpy(char *, char *);
void MyMemCpy(char *, char *, int);

>>>>>>> b8a9e70220cc217dedb00b209013c8d21b381054
#endif

