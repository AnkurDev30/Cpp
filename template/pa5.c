//try to generate perodic task.

#include"freeRtos.h"
#include"task.h"
Taskhandle_t t1;
Taskhandle_t t2;
void fun1()
{
    printf("hello\n");
    vTaskDelayUntil(&lastWake,pdms_to_TICKS(200));
    while(1);
}
void fun2()
{
    printf("hi\n");
    vTaskDelayUntil(&lastWake,pdms_to_TICKS(500));
    while(1);
}
int main()
{
    xTaskCreate(fun1,"fun1",200,NULL,2,&t1);
    xTaskCreate(fun2,"fun2",200,NULL,1,&t2);

    vStartTaskScheduler();
}

