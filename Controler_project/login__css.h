const char login_css[] PROGMEM = R"=====(
*{
    margin: 0;
    padding: 0;
    font-family: sans-serif;
    box-sizing: border-box;
}
body{
    background-image: linear-gradient(150deg,#4FFAE7,#55CDED,#655AFE);
    background-position: center;
    background-size: cover;
    background-attachment: fixed;
    overflow: hidden;
}
#login-container{
    margin: 40px auto ;
    width: 300px;
    height: 550px;
    background-color: white;
    border-radius: 5px;
    position: relative;
}
#header{
    color: #00CCFF;
    text-align: center;
    padding-top: 45px;
    margin-bottom: 15px;
    cursor: pointer;
}
.inputs-continer{
    display: flex;
    flex-wrap: wrap;
    justify-content: space-around;
}
.inputs-continer>input[type="text"],.inputs-continer>input[type="password"] {
    width: 85%;
    height:40px;
    outline: none;
    margin: 7px 0 7px 0;
    background-color: #E4E4E4;
    border: none;
    font-size: 18px;
    color: #333;   
    padding-left: 30px;
    border-radius:3px;
    
}
.inputs-continer>input[type="button"]
{
    margin-top: 25px;
    background-size: 500px;
    background-position: left;
    width: 85%;
    border: none;
    background-image: linear-gradient(90deg,#4FFAE7,#b45afe,#4FFAE7);
    height: 40px;
    color: white;
    font-size: 18px;
    letter-spacing: 3px;
    border-radius: 3px;
    cursor: pointer;
    transition: all .7s;
}
.inputs-continer>input[type="button"]:hover{
    background-position: right;

}
.checkbox{
    width: 85%;
    margin-top: 15px;
}
.checkbox span{
    margin-left: 10px;
    color: #444;
    font-size: 14px;
}
.inputs-continer>input[type="text"]:focus,.inputs-continer>input[type="password"]:focus{
    box-shadow: -2px 2px 5px #6b8ff180;
    background-color: #f1eded;
}
#error{
    font-size: 16px;
    text-align: center;
    margin: 20px 0 10px 0;
    color: rgb(224, 4, 4);
    text-decoration: underline;
    cursor: not-allowed;
    display: none;

}   
#logo{
    width: 150px;
    display: block;
    margin: auto;
    margin-bottom: 20px;
    cursor: pointer;
}
.footer{
    position: absolute;
    bottom:15px;
    text-align: center;
    width: 100%;
    color: #06bce9;
    font-size: 12px;
}
)=====";
