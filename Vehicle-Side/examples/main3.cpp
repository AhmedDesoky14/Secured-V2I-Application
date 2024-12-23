

#include "v2i_client.h"



v2i_client V2I_Me(123);




int main(int argc,char* argv[])
{
    std::string SSID = "iPhone";
    std::string Password = "11442001";
    std::string IP_Address = "172.20.103";
    unsigned short port = 60552;
    unsigned int Inf_ID = 124;
    std::string Mssg = "Alexandria 2025";
    std::string Rx_Mssg;
    v2i_client::V2I_CLIENT_STATUS Status;




    Status = V2I_Me.V2I_Connect(SSID,Password,IP_Address,port,Inf_ID);
    Status = V2I_Me.V2I_Check_Connection();
    Status = V2I_Me.V2I_Send_Message(Mssg,0);
    Status = V2I_Me.V2I_Check_Inbox();
    Status = V2I_Me.V2I_Read_Message(Rx_Mssg);
    Status = V2I_Me.V2I_Disconnect();


}