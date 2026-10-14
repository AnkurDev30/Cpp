#include<freeRtos.h>
#include<task.h>
#include<queue.h>
#include<semper.h>

Taskhandler_t t1;
Taskhandler_t t2;


Semaphorehandle_t sem;
Queuehandler_t myQueue;
void fun1()
{
    int a=1;
    while(1)
    {
        if(xQueueSend(myQueue,&a,pdms_to_TICKS(100))==pdPass)
        {
            if(xSemaphoreTake(sem,tick_to_PDMS(100)))
            {
                a =count;
                count =0;
            xSemaphoreGive(sem);
            }
            std::cout<<"fun1\n";
        }
        
    }
}
void fun2()
{
    int b=0;
    while(1)
    {
        if(xQueueReceive(myQueue,&b,tick_to_PDMS(100))==pdPass)
        {
        if(xSemaphoreTake(sem,tick_to_PDMS(100)))
        {
            count++;
            xSemaphoreGive(sem);
        }
        std::cout<<b<<std::endl;
        std::cout<<"fun2\n";
        }
    }
}
int main()
{
    myQueue = xQueueCreate(5,5);
    sem = xSemaphoreCreateCounting(3,3);


    xTaskCreate(fun1,"fun1",100,NULL,2,&t1);
    xTaskCreate(fun2,"fun1",100,NULL,2,&t2);

    xTaskStartScheduler();
    for(;;);

}
