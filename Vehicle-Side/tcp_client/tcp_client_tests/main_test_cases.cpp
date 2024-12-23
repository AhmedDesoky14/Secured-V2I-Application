#include "tcp_client.h"
#include <time.h> //for processes time calculations
struct timespec start_clock,end_clock;
unsigned long diff_ns = 0;
void Test_Case1(void)
{
    tcp_client client;
    std::string Receive_Buffer;
    tcp_client::TCP_CLIENT_STATUS Status;
    Status = client.TCP_Establish_Connection("192.168.1.19",49831);
    Status = client.TCP_Establish_Connection("192.168.1.19",49831);
    Status = client.TCP_Check_Connection();
    Status = client.TCP_Send_Message("Message Sent");
    Status = client.TCP_Check_Inbox();
    Status = client.TCP_Check_Inbox();
    Status = client.TCP_Read_Message(Receive_Buffer);
    Status = client.TCP_Check_Inbox();
    Status = client.TCP_Check_Connection();
    Status = client.TCP_Close_Connetion();
    Status = client.TCP_Check_Inbox();
    Status = client.TCP_Read_Message(Receive_Buffer);
}
void Test_Case2(void)
{
    tcp_client client;
    std::string Receive_Buffer;
    tcp_client::TCP_CLIENT_STATUS Status;
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = client.TCP_Establish_Connection("192.168.1.19",49831);
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Establish TCP Connection:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = client.TCP_Check_Connection();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Check TCP Connection:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = client.TCP_Send_Message("Message Sent");
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Send Message:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    while((client.TCP_Check_Inbox())!= tcp_client::TCP_OK);
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Check Inbox:%ld us\n",diff_ns); 
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = client.TCP_Read_Message(Receive_Buffer);
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Read Message:%ld us\n",diff_ns);
    clock_gettime(CLOCK_MONOTONIC_RAW,&start_clock);
    Status = client.TCP_Close_Connetion();
    clock_gettime(CLOCK_MONOTONIC_RAW,&end_clock);
    diff_ns =((end_clock.tv_sec-start_clock.tv_sec)*1000000+(end_clock.tv_nsec - start_clock.tv_nsec)/1000);
    printf("Close Connection:%ld us\n",diff_ns);
}
int main(int argc,char* argv[])
{
    //Test_Case1();
    Test_Case2();
}