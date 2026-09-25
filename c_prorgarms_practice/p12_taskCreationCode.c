#include<freeRtos.h>

Task_handler_t T1;
Task_handler_t T2;
QueueHander_t Q1;

void task1()
{
    while(1)
    {
        int a=10;
        xQueueSend(Q1,&a,100);
        printf("task1\n");
        vTaskDelayUntil(LAST_WAKE_UP_TIME,200);
    }
}
void task2()
{
    while(1)
    {
        int b=10;
        xQueueRecieve(Q1,&b,100);
        if(b>5);
        printf("hi\n");
        printf("task1\n");
        vTaskDelayUntil(LAST_WAKE_UP_TIME,200);
    }
}
int main()
{
    Q1=xQueueCreate(5,20);
    xTaskCreate(task1,"t1",200,NULL,2,T1);
    xTaskCreate(task2,"t2",200,NULL,1,T2);

    vStartTaskSchedular();
    for(;;);
}
