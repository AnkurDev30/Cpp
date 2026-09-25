//semaphore and mutes demo

#include<freeRtos.h>
#include<mutex.h>
#include<semphr.h>

#include<task.h>

Semaphore_t sem;
TaskHandler_t t1;
TaskHandler_t t2;
TaskHandler_t t3;
void fun1()
{
    while(1)
    {
        if(xSemaphoreTake(sem,200)==true)
        {
            //use shared resource
            vTaskDelay(200);
            xSemaphoreGive(sem);
        }
    }
}
void fun2()
{
    while(1)
    {
        if(xSemaphoreTake(sem,200)==true)
        {
            //use shared resource
            vTaskDelay(200);
            xSemaphoreGive(sem);
        }
    }
}
#define MUTEX 1
#define SEMA_COUNT 0
#define SEMA_BIN 0
int main()
{
    #if SEMA_COUNT==1
    sem=xSemaphoreCreateCount(3,3);
    #endif
    #if SEMA_BIN==1
    sem=xSemaphoreCreateBinary();
    #endif
    #if MUTEX==1
    sem=xSemaphoreCreateMutex();  
    #endif 

    xTaskCreate(fun1,"task1",200,NULL,2,t1);
    xTaskCreate(fun2,"task2",200,NULL,1,t2);
    vStartTaskSechdular();
}