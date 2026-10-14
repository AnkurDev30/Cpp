#include<freeRtos.h>
#include<task.h>
#include<queue.h>

Taskhandler_t t1;
Taskhandler_t t2;

Queuehandler_t myQueue;
void fun1()
{
    int a=1;
    while(1)
    {
        xQueueSend(myQueue,&a,tick_to_PDMS(100));
        std::cout<<"fun1\n";
    }
}
void fun2()
{
    int b=0;
    while(1)
    {
        xQueueReceive(myQueue,&b,tick_to_PDMS(100));
        std::cout<<b<<std::endl;
        std::cout<<"fun2\n";
    }
}
int main()
{
    myQueue = xQueueCreate(5,5);

    xTaskCreate(fun1,"fun1",100,NULL,2,&t1);
    xTaskCreate(fun2,"fun1",100,NULL,2,&t2);

    xTaskStartScheduler();
    for(;;);

}
