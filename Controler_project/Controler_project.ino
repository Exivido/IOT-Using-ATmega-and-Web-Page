//#include <ESP8266WiFi.h>
//#include <ESP8266WebServer.h>
#include <WiFi.h>
#include <WebServer.h>
#include "login__.h"
#include "login__css.h"
#include "login__js.h"
#include "Config__.h"
#include "Config__css.h"
#include "Config__js.h"
#include "Logo__js.h"

////////////////////////////////////////////////////LOGIN String 
String LOGIN_USERNAME,LOGIN_PASS,OK_LOGIN="OK";
////////////////////////////////////////////////////AP String
String AP,APname,APpass,APIP,APchannel,APgw,APsubnet,hideAP,APmax;
////////////////////////////////////////////////////STA String 
String STA,STAssid,STApass,STAgwip,STAsubnet,STAdns1,STAdns2,STAchannel,STAbssid;

////////////////////////////////////////////////////OUT String
String out1,out2,out3,out4,out5,out6,out7,out8,out9,out10;

const char* username = "admin";
const char* password = "12345678";

const char* ssid = "Yaser";
const char* pass = "#Yas6249877@$&#";

//const char* ssid = "yas_x3";
//const char* pass = "12345678";

String str(ssid);

  IPAddress staticIP(192,168,1,32);
  IPAddress subnetMasc(255,255,255,0);
  IPAddress gateway(192,168,1,1);


//ESP8266WebServer server (80);
WebServer  server (80);

void setup() {
 
  Serial.begin(115200);
  WiFi.disconnect();
  WiFi.begin(ssid,pass);
  WiFi.config(staticIP,gateway,subnetMasc);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  String IP = WiFi.localIP().toString();
  Serial.println(IP);

  server.begin();
  Serial.println("HTTP Server Started!");
  
  server.on("/",Handle_Root);
  //--------------------------
  server.on("/login.css",[](){ server.send(200,"text/css",login_css);});
  server.on("/login.js",[](){server.send(200,"application/javascript",login_js);});
  server.on("/logo.js",[](){ server.send(200,"application/javascript",Logo__);});
  server.on("/error.js",[](){if(OK_LOGIN=="NOT_OK")server.send(200,"application/javascript",error_js);});

  server.on("/Config_page",Check_pass);
  server.on("/finish",Config__page);
  server.on("/Config.css",[](){ server.send(200,"text/css",Config_css);});
  server.on("/Config.js",[](){server.send(200,"application/javascript",Config_js);});

}


void loop() {
  server.handleClient();
}

void Handle_Root()
{
  server.send(200,"text/html",login_page);
 
}

void Check_pass()
{
    LOGIN_USERNAME = server.arg("LOGIN_USERNAME");
    LOGIN_PASS = server.arg("LOGIN_PASS");
    Serial.println(LOGIN_PASS);
    Serial.println(LOGIN_USERNAME);
    if(LOGIN_PASS==password && LOGIN_USERNAME == username)
    { OK_LOGIN="OK";
      Serial.println(OK_LOGIN);
      server.send(200,"text/html",Config_page);
    }
else
   {   OK_LOGIN="NOT_OK";
       Serial.println(OK_LOGIN);
       server.send(200,"text/html",login_page);
   }
}
void Config__page()
{

  AP           = server.arg("AP");
  STA          = server.arg("STA");  

  APname       = server.arg("APname");
  APpass       = server.arg("APpass");
  APIP         = server.arg("APIP");
  APchannel    = server.arg("APchannel");
  APgw         = server.arg("APgw");
  APsubnet     = server.arg("APsubnet");
  hideAP       = server.arg("hideAP");
  APmax        = server.arg("APmax");

  STAssid      = server.arg("STAssid");
  STApass      = server.arg("STApass");
  STAgwip      = server.arg("STAgwip");
  STAsubnet    = server.arg("STAsubnet");
  STAdns1      = server.arg("STAdns1");
  STAdns2      = server.arg("STAdns2");
  STAchannel   = server.arg("STAchannel");
  STAbssid     = server.arg("STAbssid");

  out1         = server.arg("out1");
  out2         = server.arg("out2");
  out3         = server.arg("out3");
  out4         = server.arg("out4");
  out5         = server.arg("out5");
  out6         = server.arg("out6");
  out7         = server.arg("out7");
  out8         = server.arg("out8");
  out9         = server.arg("out9");
  out10        = server.arg("out10");

  if(AP!="")
   Serial.println(AP);
  if(STA!="")
   Serial.println(STA);
  if(STAssid!="")
   Serial.println(STAssid);
  if(STApass!="")
   Serial.println(STApass);
  if(STAgwip!="")
   Serial.println(STAgwip);
  if(STAsubnet!="")
    Serial.println(STAsubnet);
  if(STAdns1!="")
   Serial.println(STAdns1);
  if(STAdns2!="")
   Serial.println(STAdns2);
  if(STAchannel!="")
   Serial.println(STAchannel);
  if(STAbssid!="")
   Serial.println(STAbssid);

  Serial.println(APname) ;
  Serial.println(APpass);
  Serial.println(APIP);

  Serial.println(APchannel);
  Serial.println(APgw);
  Serial.println(APsubnet);
  Serial.println(hideAP);
  Serial.println(APmax);

   Serial.println(out1);
   Serial.println(out2);
   Serial.println(out3);
   Serial.println(out4);
   Serial.println(out5);
   Serial.println(out6);
   Serial.println(out7);
   Serial.println(out8);
   Serial.println(out9);
   Serial.println(out10);

  
  delay(1);
  server.send(204,"");
}
