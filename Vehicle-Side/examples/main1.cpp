

#include "v2i_client.h"







int main(int argc,char* argv[])
{
    string SSID = "EECE2024";
    string Password = "CUFE@123";
    string IP_Address = "192.168.1.24";
    unsigned short port = 63910;
    unsigned int Inf_ID = 124;
    string Mssg = "Alexandria 2025";
    string Rx_Mssg;
    V2I_CLIENT_STATUS Status;




    Status = V2I_Connect(SSID,Password,IP_Address,port,Inf_ID,123);
    Status = V2I_Check_Connection();
    Status = V2I_Send_Message(Mssg,0);
    Status = V2I_Check_Inbox();
    Status = V2I_Read_Message(Rx_Mssg);
    Status = V2I_Disconnect();


}