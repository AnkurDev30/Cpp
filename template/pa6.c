//xTaskCreate : - if sufficiant memory available in heap it will create task otherwise send error.
//xTaskStartSchedular :- it will start scheduler, it will run task as per priority and timeslice
//or delay if no task available it will provide idel task 
//vTaslDelay and vTaskDelayUntill 
//xTaskEndScheduler :- stop schduler(no context switching no running task), cleanup
//return to main 
//vTaskSupend, vTaskResume, vTaskResumeFromISR
//Queue is nothing but its data stricture which is use for intertask communication

#include"freeRtos.h"
#include"task.h"
#include"queue.h"

Taskhandle_t t1;
Taskhandle_t t2;
Queuehandle_t myQueue;



#define LENGHT 10
#define SIZE 5

struct data
{
    int a;
};
void fun1(data *d1)
{
    int val=5;
    while(1)
    {
        printf("hello\n");
        xQueueSend(myQueue,&val,pdms_to_Tick(200));
        vTaskDelayUntil(lastWake,pdms_to_Tick(200));
    }
}
void fun1(data *d1)
{
    int rcval =0;
    while(1)
    {
        printf("hello\n");
        xQueueReceive(myQueue,&val,pdms_to_Tick(200));
        rcval =val;
        vTaskDelayUntil(lastWake,pdms_to_Tick(200));
    }
}
void fun2();
int main()
{
    myQueue =xQueueCreate(LENGHT,SIZE);

    data d1.a=10;
    xTaskCreate(fun1,"fun",200,&data,2,&t1);
    xTaskCreate(fun2,"fun",200,&data,1,&t2);
}