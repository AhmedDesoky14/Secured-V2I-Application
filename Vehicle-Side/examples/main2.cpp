

#include "v2i_client.h"







int main(int argc,char* argv[])
{
    // string SSID = "EECE2024";
    // string Password = "CUFE@123";
    // string IP_Address = "192.168.1.24";
    // unsigned short port = 63910;
    // unsigned int Inf_ID = 124;
    // string Mssg = "Alexandria 2025";
    // string Rx_Mssg;
    // V2I_CLIENT_STATUS Status;




    // Status = V2I_Connect(SSID,Password,IP_Address,port,Inf_ID,123);
    // Status = V2I_Check_Connection();
    // Status = V2I_Send_Message(Mssg,0);
    // Status = V2I_Check_Inbox();
    // Status = V2I_Read_Message(Rx_Mssg);
    // Status = V2I_Disconnect();
    // string SSID = "Desoky";
    // string receive_buffer;
    // V2I_CLIENT_STATUS status;
    // WiFi_Manager_Init();
    // status = V2I_Search("EECE2024");
    // status = V2I_Check_Connection();
    // status = V2I_Connect("Rasp","Linux@147","192.168.1.3",50282,123,456);
    // status = V2I_Check_Connection();
    // status = V2I_Send_Message("Eid Mubarak\r\n");
    // status = V2I_Check_Inbox();
    // status = V2I_Read_Message(receive_buffer);
    // status = V2I_Check_Inbox();
    // status = V2I_Read_Message(receive_buffer);
    // status = V2I_Disconnect();






    string receive_buffer;
    V2I_CLIENT_STATUS status;
    WiFi_Manager_Init();
    status = V2I_Search("INF_01");
    status = V2I_Check_Connection();
    status = V2I_Connect("INF_01","12345678","192.168.10.10",333,123,456);
    status = V2I_Check_Connection();
    status = V2I_Send_Message("Eid Mubarak\r\n");
    status = V2I_Check_Inbox();
    status = V2I_Read_Message(receive_buffer);
    status = V2I_Check_Inbox();
    status = V2I_Read_Message(receive_buffer);
    status = V2I_Disconnect();


}