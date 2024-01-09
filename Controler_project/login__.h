const char login_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>login</title>
    <link rel="stylesheet" href="login.css">
    <script src="login.js" defer></script>
    <script src="error.js" defer></script>
   
</head>

<body>
    <div id="login-container">
        <h1 id="header">LOGIN</h1>
         <img id="logo"> 
         <script src="logo.js"></script>
        <h3 id="error">Wrong username or password!!!</h3>
        <form name="login" method="post" action="/Config_page" enctype="application/x-www-form-urlencoded"
            accept-charset="UTF-8" id="login">
            <div class="inputs-continer">
                <input type="text" name="LOGIN_USERNAME" placeholder="Username" id="username">
                <input type="password" name="LOGIN_PASS" placeholder="Password" id="password" onkeydown="noSpace(event)">
                <div class="checkbox"><input type="checkbox" onchange="showpass(this)"><span>Show Password</span></div>
                <input type="button" value="Login" onclick="form_login()">
                <p class="footer">Land-of-tech.ir</p>
        </form>
    </div>

    </div>
</body>

</html>


)=====";
