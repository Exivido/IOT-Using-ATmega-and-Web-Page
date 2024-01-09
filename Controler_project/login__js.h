const char error_js[] PROGMEM = R"=====(
document.querySelector("#error").style.display="block";
)=====";

const char login_js[] PROGMEM = R"=====(
function showpass(element){
    if(element.checked==true){
        document.querySelector("#password").type="text";
    }else
    document.querySelector("#password").type="password"
}
function noSpace(e){
    if(e.keyCode=="32")
    {
        e.preventDefault();
    }
}
function form_login(){
    if(document.querySelector("#password").value==""||document.querySelector("#username").value=="")
    {
        alert("Please Enter your username and password.");
    }
    else if(document.querySelector("#password").value.length<8)
    {
        alert("Your Password Must Be 8 Letters Long!");
    }
    else
    {
        document.querySelector("#login").submit();
    }
}


)=====";
