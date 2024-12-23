/*======================================Includes===============================================*/
#include "wifi_manager.h"
#include <time.h> //for processes time calculations
WIFI_STATE Status = 0;
char IP_Address[20] = {0};
struct timespec start_clock,end_clock;
unsigned long diff_ns = 0;
/*=====================================Test Cases==============================================*/
void Test_Case1(void)
{
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Disconnect();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Disconnect:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Search_AP("Desoky");
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Search AP:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Connect("EECE2024","12345678");
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Connect:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Check_AP_Connection();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Check connection:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Check_Internet_Connection();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Internet:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Get_IP_Address(IP_Address);
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Get IP Address:%ld us\n",diff_ns);
    printf("IP ADDRESS:%s\n",IP_Address);
}
void Test_Case2(void)
{
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Disconnect();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Disconnect:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Search_AP("Ras");
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Search AP:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Connect("EECE2024x","123456789");
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Connect:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Check_AP_Connection();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Check connection:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Check_Internet_Connection();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Internet:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Get_IP_Address(IP_Address);
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Get IP Address:%ld us\n",diff_ns);
}
void Test_Case3(void)
{
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Disable();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Disable:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Check_Availability();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Check:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Enable();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Enable:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Check_Availability();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Check:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = WiFi_Connect("Desoky","Tesla@147");
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("WiFi Connect:%ld us\n",diff_ns);
}
/*========================================main=================================================*/
int main(int argc,char* argv[])
{
    //Test_Case1();
    //Test_Case2();
    Test_Case3();
}