const char Config_page[] PROGMEM = R"=====(

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Config</title>
    <link rel="stylesheet" href="Config.css">
    <script src="Config.js" defer></script>
</head>
<body>

    <div id="main_container">
        <h3 class="container_header">
            Configuration Panel
        </h3>
        <!-- stage -->
        <div id="statement">
            <span class="stage s1 "><div class="stage d1">1</div></span><span class="stage s2"><div class="stage d2">2</div></span><span class="stage s3"><div class="stage d3">3</div></span><span class="stage s4"><div class="stage d4">4</div></span>
        </div>
        <!-- dynamic page container -->
        <div id="page-content">
            <form name="Form1" method="post" action="/finish" enctype="application/x-www-form-urlencoded" accept-charset="UTF-8" id="Form1" >
                <!-- page one reset Password -->
            <div class="content c1">
                <h5 class="content-header">
                    welcome ! <br><br> change your username & password!
                </h5>
                <input type="text" name="username" placeholder="New username" class="req">
                <input type="password" name="password" placeholder="New password" class="changepass req pass ">
                <input type="password" placeholder="Repeat password" class="changepass req pass">
                <div class="showpassword"><input type="checkbox" onchange="loginShowPass(this)"><span>Show Password</span></div>
                <!-- page two ap setting -->
            </div>
            <div class="content c2" style="display: none;">
                <div class="enable-form"><input type="checkbox" class="form-activation" onchange="disableForm(this)" name="AP" value="ap"><span>Enable AP</span></div>
                <div class="row">
                    <label for="APname">AP Name:</label>
                    <input type="text" name="APname" id="APname" class="req" disabled>
                </div>
                <div class="row">
                    <label for="">AP Pass:</label>
                    <input type="password" name="APpass" id="APpass" class="req pass" disabled>
                    <input type="checkbox" class="showPassCheck" onchange="showPassword(this)" disabled>
                </div>
                <div class="row">
                    <label for="APIP">AP IP:</label>
                    <input type="text" name="APIP" id="APIP" class="req" disabled>
                </div>
                <div class="row">
                    <label for="APchannel">AP Channel:</label>
                    <input type="text" name="APchannel" id="APchannel" class="req" disabled>
                </div>
                <div class="row">
                    <label for="APgw">AP Gateway:</label>
                    <input type="text" name="APgw" id="APgw" class="req" disabled>
                </div>
                <div class="row">
                    <label for="APsubnet">AP Subnet:</label>
                    <input type="text" name="APsubnet" id="APsubnet" class="req" disabled>
                </div>
                <div class="hideAP">
                    <label for="hideAP">Hide AP:</label><span><input type="radio" disabled name="hideAP" value="yes"></span><span>Yes</span><span><input type="radio" value="no" name="hideAP" disabled checked></span><span>No</span>
                </div>
                <div class="row">
                    <label for="APmax">AP Max:</label>
                    <input type="text" name="APmax" id="APmax" class="req" disabled>
                </div>
            </div>
            <!-- page three STA setting -->
            <div class="content c3" style="display: none;">
                <div class="enable-form"><input type="checkbox" class="form-activation" onchange="disableForm(this)" name="STA" value="sta"><span>Enable STA</span></div>
                <div class="row">
                    <label for="STAssid">SSID:*</label>
                    <input type="text" name="STAssid" id="STAssid" class="req" disabled>
                </div>
                <div class="row">
                    <label for="STApass">Password:*</label>
                    <input type="password" name="STApass" id="STApass" class="req pass" disabled>
                    <input type="checkbox" class="showPassCheck" onchange="showPassword(this)" disabled>
                </div>
                <div class="row">
                    <label for="STAIP">STA IP:*</label>
                    <input type="text" name="STAIP" id="STAIP" class="req" disabled>
                </div>
                <div class="row">
                    <label for="STAgwip">Gateway:*</label>
                    <input type="text" name="STAgwip" id="STAgwip" class="req" disabled>
                </div>
                <div class="row">
                    <label for="STAsubnet">Subnet:*</label>
                    <input type="text" name="STAsubnet" id="STAsubnet" class="req" disabled>
                </div>
                <div class="row">
                    <label for="STAdns1">DNS1:</label>
                    <input type="text" name="STAdns1" id="STAdns1" disabled>
                </div>
                <div class="row">
                    <label for="STAdns2">DNS2:</label>
                    <input type="text" name="STAdns2" id="STAdns2" disabled>
                </div>
                <div class="row">
                    <label for="STAchannel">Channel:</label>
                    <input type="text" name="STAchannel" id="STAchannel" disabled>
                </div>
                <div class="row">
                    <label for="STAbssid">BSSID:</label>
                    <input type="text" name="STAbssid" id="STAbssid" disabled>
                </div>
            </div>
            <!-- page 4 rl setting -->
            <div class="content c4" style="display: none;">
                <div class="rows">
                    <div class="row">
                        <label for="out1">Out 1 :</label>
                        <input type="text" name="out1" id="out1" value="OUT 1" class="req" form="Form1">
                    </div>
                </div>
                <div class="outputs">
                    <input type="button" value="Add" onclick="addNewOut()">
                    <input type="button" value="Remove" onclick="removeOut()">
                </div>
                <input type="button" value="Apply" id="Submit" onclick="sendForm()">
            </div>
        </form>
        </div>
        <div class="buttons">
            <input type="button" value="Back" onclick="changePage(this)" style="background-image: none;" disabled >
            <input type="button" value="Next" onclick="changePage(this)" >
        </div>
    </div>
</body>
</html>


)=====";
