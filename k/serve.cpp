


#include "serve.h"
#include <string>
#include <iostream>

using namespace std;
namespace k
{
void serve::handle(struct evhttp_request *req)
{ 
      cout<<"connect"<<endl;
      std::string  u = evhttp_request_get_uri(req);
      cout << u  <<":uri"<<endl;
      k::uri    msg(u);
      cout<<msg.request_type<<endl;

 







 
/*======================================================================
       k::item i;
       k::item::iterator p;
       k::mysql  sql;
       i["addr"]="192.168.1.108";
       i["user"]="root";
       i["password"]= "xingke";
       i["database_name"]="service_finder";
       sql.connect(&i);
                                              //sql.create_database();  
       i.clear();
       i["table_name"]="service_table";
       i["service_name"]="dns";
       i["ip"]= "192.168.1.80";
       i["port"]="21";
       i= sql.insert(&i);  //ok
       cout << (p=(i.find("state")))->second ;
   
       i.clear();
       i["service_name"]="dns";
       i["table_name"]="service_table";
       i["time"]="40";
       sql.find(&i);   
                                  //ok
       i.clear();
       i["time"]="20";
       sql.del_invalid(&i);       //ok                          
      
       i.clear();
       i["table_name"]= "service_table"; 
       i["id"]="10"; 
       sql.update(&i);           //ok   
       
        i.clear();
       i["table_name"]= "service_table"; 
       i["id"]="10"; 
       sql.del(&i);
                         */              
 



}

}