#ifndef __LOGGING__
#define __LOGGING__

#include"constant.h"

#define F_IN if (__LOGGING__ON__) {cout<<"(++)"<<__FUNCTION__<<endl;}
#define F_OUT if (__LOGGING__ON__) {cout<<"(--)"<<__FUNCTION__<<endl;}

#define ASSERT_BREAK(COND, MSG) if COND {cout<<#MSG; break;}
#define ASSERT_BREAK_RETVAL(COND, MSG, RETURN_VALUE) if COND {cout<<#MSG; RETURN_VALUE; break;}

#define LD(MSG) if (__LOGGING__ON__) {cout<<"[Debug]" << #MSG<<endl;}

#endif