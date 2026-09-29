//creating task
#include"rtos.h"
#include"task.h'

Taskhandle_t t1;
Taskhandle_t t2;

void fun1()
{
    printf("hello");
    vTaskDelay(500);
    while(1);
}
void fun2()
{
    printf("hello");
    vTaskDelay(500);
    whiel(1);
}

int main()
{
    xTaskCreate(fun1,"funtion one",200,NULL,2,&t1);
    xTaskCreate(fun2,"funtion two",200,NULL,1,&t2);

    vStartScheduler();
    for(;;);
}