//semaphore 

#include"freeRtos.h"
#include"task.h"
#include"smpr.h"

TashHandle_t t1;
TashHandle_t t2;

SemphoreHandle_t sem;

void fun()
{
    while(1)
    {
        if(xSemaphoreTake(sem,pdms_to_TICKS(200)))
        {
            //share resource update.
            xSemaphoreGive(sem);
        }
    }
}
void fun2()
{
    while(1)
    {
        if(xSemaphoreTake(sem,pdms_to_TICKS(200)))
        {
            //share resource update.
            xSemaphoreGive(sem);
        }
    }
}

int main()
{
    sem =xSemaphoreCreateCount(2,2);

    xTaskCreate(fun,"f",200,NULL,2,&t1);
    xTaskCreate(fun2,"f",200,NULL,1,&t2);

    vTsakStartScheduler();
    for(;;);
}