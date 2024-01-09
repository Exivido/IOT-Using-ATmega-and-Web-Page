const char Config_css[] PROGMEM = R"=====(
*{
    padding: 0;
    margin:0;
    box-sizing: border-box;
}
body{
    background-image: linear-gradient(150deg,#4FFAE7,#55CDED,#655AFE);
    background-size: cover;
    background-attachment: fixed;
    font-family: sans-serif;

}
#main_container{
    width: 300px;
    height: auto;
    background-color: white;
    margin: auto;
    margin-top: 40px;
    border-radius: 5px;
    position: relative;
    padding-bottom: 1px;
}
.container_header{
    text-align: center;
    padding-top: 25px;
    font-family: sans-serif;
    color: #00CCFF;
    margin-bottom: 30px;
    cursor: pointer;
}
#statement{
    width: 85%;
    height: 10px;
    margin: auto;
}
#statement>.stage{
    width: 24%;
    margin-right: 1%;
    background-color: #eee;
    height: 10px;
    display: inline-block;
}
#statement>.stage>div{
    height: 25px;
    width: 24px;
    margin: auto;
    background-color: #eee;
    margin-top: -7px;
    border-radius: 100%;
    text-align: center;
    line-height: 25px;
    font-size: 12px;
    cursor: pointer;
    color: #444;
    margin-bottom: 20px;
}
.active{
    color: white !important;
    background-color: #00CCFF !important;
}
#page-content{
    width: 100%;
    height: auto;
    margin-top: 50px;
    height: auto;    
    
}
#main_container .buttons{
    display: flex;
    justify-content: space-evenly;
    bottom: 0px;
    margin-top: 20px;
    margin-bottom: 20px;

}
#main_container .buttons input[type="button"]{
    width: 40%;
    outline: none;
    border: none;
    background-size:  230px 50px;
    background-position: right;
    background-image: linear-gradient(90deg,#00CCFF,#2393ee,#00CCFF);
    background-color: #aaa;
    color: white;
    font-size: 18px;
    letter-spacing: 3px;
    border-radius: 4px;
    cursor: pointer;
    transition: all .7s;
    height: 40px;
}
#main_container .buttons input[type="button"]:hover{
    background-position: left;
}
#page-content .content h5{
    color: #0084ff;
    width: 85%;
    display: block;
    text-align: center;
    margin: 10px auto 40px auto;
   font-size: 14px;
}
#page-content .content input[type="text"],#page-content .content input[type="password"]{
    width: 85%;
    height: 35px;
    outline: none;
    margin: 15px auto;
    display: block;
    background-color: #E4E4E4;
    border: none;
    font-size: 15px;
    color: #333;   
    padding-left: 30px;
    border-radius:3px;
}
input[type="text"]:focus,input[type="password"]:focus
{
    
    box-shadow: -2px 2px 5px #6b8ff180 !important; 
    background-color: #f1eded !;
}
#page-content .c1 .showpassword{
    width: 85%;
    margin: 15px auto;
}
#page-content .c1 .showpassword span{
    font-size: 14px;
    margin-left: 10px;
    color: #333;
}
#page-content .c1 .showpassword input{
    cursor: pointer;
}
.enable-form{
    width: 85%;
    margin: auto;
    margin-bottom: 30px;
}
.enable-form span{
    margin-left: 10px;
    font-size: 15px;
    color: #444;
    
}
#page-content .content .row{
    width: 85%;
    margin: auto;
    display: flex;
    justify-content: space-between;
    height: 30px;
    margin-top: 10px;
    position: relative;
    

}
#page-content .content .row input[type="text"],#page-content .content .row input[type="password"]{
    width: 65%;
    margin: 0 !important;
    height: 30px !important;
    padding-left: 10px;
}
#page-content .content .row label{
    line-height: 30px;
    font-family: sans-serif;
    font-size: 14px;
    color: #333;
}
#page-content .content .hideAP{
    width: 85%;
    margin: auto;
    height: 30px;
    margin-top: 10px;
    display: flex;
    justify-content: space-between;
}
#page-content .content .hideAP span{
    color: #333;
    font-size: 14px;
    height: 30px;
    line-height: 30px;
}
#page-content .content .hideAP label{
    color: #333;
    font-size: 14px;
    line-height: 30px;
}
#page-content .c4 .rows .row label{
    color: #0084ff;
    font-size: 18px;
    font-weight: bold;
}
#page-content .c4 .outputs{
    width: 85%;
    display: flex;
    justify-content: space-between;
    margin: auto;
    margin-top: 30px;
}
#page-content .c4 .outputs input{
    width: 45%;
    outline: none;
    border: none;
    background-color: #0084FF;
    color: white;
    font-size: 18px;
    letter-spacing: 3px;
    border-radius: 4px;
    cursor: pointer;
    height: 30px;
}
#page-content .c4 .outputs input:hover{
    background-position: left;
}
#Submit{
    display: block;
    margin: auto;
    width: 85%;
    margin-top: 20px;
    outline: none;
    border: none;
    background-color: #0084FF;
    color: white;
    font-size: 18px;
    letter-spacing: 3px;
    border-radius: 4px;
    cursor: pointer;
    height: 30px;
}

.d1,.s1{
    background-color: #0084FF !important;
    color: white !important;
}
.showPassCheck{
    position: absolute;
    right: 6px;
    top: 8px;
}
)=====";
