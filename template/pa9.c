//semaphore binary

#include"freeRtos.h"
#include"task.h"
#include"semphr.h"
Semaphore_t sem;
TaskHandle_t t1;
TaskHandle_t t2;
void fun1()
{
    while(1)
    {
        if(xSemaphoreTake(sem,pdms_To_Ticks)==pd_TRUE)
        {
            //shared resource use
            xSemaphoreGive();
        }
    }
}
void fun2()
{
    while(1)
    {
        if(xSemaphoreTake(sem,pdms_To_Ticks)==pd_TRUE)
        {
            //shared resource use
            xSemaphoreGive();
        }
    }
}

int main()
{
    sem = xSemaphoreCreateMutex();

    xTaskCreate(fun1,"f",200,NULL,2,&t1);
    xTaskCreate(fun2,"f",200,NULL,1,&t2);

    vTsakStartScheduler();
    for(;;);  
}