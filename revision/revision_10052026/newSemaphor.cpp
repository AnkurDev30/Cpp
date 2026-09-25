//semaphore code sampele

//header files

void task1()
{
    if(xSemaphoreTake(xSem)==TRUE)
    {
        //use critcal Section.
        xSemaphoreGive(xSem);
    }
    else
    {
        vTaskDelay(500);
    }
}
void task2()
{
    if(xSemaphoreTake(xSem)==TRUE)
    {
        //use critcal Section.
        xSemaphoreGive(xSem);
    }
    else
    {
        vTaskDelay(700);
    }
}
int main()
{
    semaphoreHandler =xSem;
    xSem = xSemaphoreCOunting(2,2);

    if(xSem == TRUE)
    {
        xTaskCreate(task1,"t1",528,1,NULL,NULL);
        xTaskCreate(task2,"t2",528,2,NULL,NULL);
    }
}

