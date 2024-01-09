
let CurrentPage=1;
let pageContent=document.querySelector("#page-content");
let statements = document.querySelector("#statement");
let numberOfPages=pageContent.querySelectorAll(".content").length;
let inputCounter=2;
// _______________variables____________________


// __________---------------------_____change page method_________------------------------___________
function changePage(element){

    let passNotSame=false;
    let isEmpty=false;
    let disabled=false;
    let shortPass=false;
    let inputs=pageContent.querySelector(".c"+CurrentPage).querySelectorAll(".req");
    if(CurrentPage==1)
    {
        let passwords=pageContent.querySelector(".c1").querySelectorAll(".pass");
        if(passwords[0].value!=passwords[1].value)
        {
            passNotSame=true;
        }
    }
    // check if form is disabled.
    if(CurrentPage<4&&CurrentPage>1)
    {
        if(inputs[1].disabled==true)
        {
            disabled=true;
        }
    }
    // check if password is shorter than 8
    if(CurrentPage<4)
    {
        if(pageContent.querySelector(".c"+CurrentPage).querySelector(".pass").value.length<8)
        {
            shortPass=true;
        }
    }
    // check if any of the require inputs are empty.
    for(i=0;i<inputs.length;i++)
    {
        if(inputs[i].value=="")
        {
            isEmpty=true;
        }
    }
    // validation
    if(!disabled)
    {
        if(isEmpty){
            alert("Require Fields Must Not Be Empty!!");
            return;
        }else
        if(shortPass){
            alert("Passwords Must Be 8 letters Long.");
            return;
        }
        else if(passNotSame)
        {
            alert("Passwords Are Not Same!")
            return;
        }
    }

    // change page and buttons design function.
    if(element.value=="Next"&&CurrentPage<numberOfPages)
    {  
        pageContent.querySelector(".c"+CurrentPage).style.display="none";
        CurrentPage+=1;
        statements.querySelector(".s"+CurrentPage).style.backgroundColor="#0084FF";
        statements.querySelector(".d"+CurrentPage).style.backgroundColor="#0084FF";
        statements.querySelector(".d"+CurrentPage).style.color="white";
        pageContent.querySelector(".c"+CurrentPage).style.display="block";
        if(CurrentPage==numberOfPages)
        {
            element.style.backgroundImage="none";
            element.disabled=true;
        }
        element.previousElementSibling.disabled=false;
        element.previousElementSibling.style.backgroundImage="linear-gradient(90deg,#00CCFF,#2393ee,#00CCFF)";
        
    }

    if(element.value=="Back"&&CurrentPage>1)
    { 
        pageContent.querySelector(".c"+CurrentPage).style.display="none";
        statements.querySelector(".s"+CurrentPage).style.backgroundColor="#EEE";
        statements.querySelector(".d"+CurrentPage).style.backgroundColor="#EEE";
        statements.querySelector(".d"+CurrentPage).style.color="#333";
        CurrentPage-=1;
        pageContent.querySelector(".c"+CurrentPage).style.display="block";
        if(CurrentPage==1)
        {
            element.style.backgroundImage="none";
            element.disabled=true;
        }
        element.nextElementSibling.disabled=false;
        element.nextElementSibling.style.backgroundImage="linear-gradient(90deg,#00CCFF,#2393ee,#00CCFF)";
    }
}



// _______________ show password function for all pages ____________________

function showPassword(element){
    if(element.checked==true)
    {
        element.previousElementSibling.type="text";
    }else{
        element.previousElementSibling.type="password";
    }
}
// _______________ show password function for change password page only ____________________

function loginShowPass(element){
    if(element.checked==true)
    {
        document.querySelectorAll(".changepass")[1].type="text";
        document.querySelectorAll(".changepass")[0].type="text";
    }else{
        document.querySelectorAll(".changepass")[1].type="password";
        document.querySelectorAll(".changepass")[0].type="password";
    }
}
// _______________ Disable form function ____________________

function disableForm(element){
    let inputs=pageContent.querySelector(".c"+CurrentPage).querySelectorAll("input");
    if(element.checked==true)
    {
        for(i=1;i<inputs.length;i++)
        {
            inputs[i].disabled=false;
        }
    }else
    {
        for(i=1;i<inputs.length;i++)
        {
            inputs[i].disabled=true;
        }
    }
}
// --------------------------      add New Out ---------------------------

function addNewOut()
{
    let rows=pageContent.querySelector('.c'+CurrentPage).querySelector(".rows");

    if(inputCounter<=10)
    {
        let row=rows.querySelector(".row").innerHTML;
        let newRow=document.createElement("div");
        newRow.className="row";
        newRow.innerHTML=row;
        newRow.querySelector("input").value="OUT "+inputCounter;
        newRow.querySelector("input").name="out"+inputCounter;
        newRow.querySelector("input").id="out"+inputCounter;
        newRow.querySelector("input").form="Form1";
        newRow.querySelector("label").innerHTML="Out"+inputCounter+" :";
        rows.appendChild(newRow);
        inputCounter++;
    }
    else
    {
        alert("Maximum number of outputs!");
    }
}
function removeOut()
{
    let rows=pageContent.querySelector('.c'+CurrentPage).querySelector(".rows");

    if(inputCounter>2)
    {
        rows.querySelectorAll(".row")[inputCounter-2].remove();
        inputCounter--;
    }
}
function sendForm(){
    let outIsEmpty=false;
    let reqOuts=pageContent.querySelector(".c"+CurrentPage).querySelectorAll(".req");
    
    for(i=0;i<reqOuts.length;i++)
    {
        if(reqOuts[i].value=="")
        {
            outIsEmpty=true;
        }
    }
    if(pageContent.querySelectorAll(".form-activation")[0].checked==false&&pageContent.querySelectorAll(".form-activation")[1].checked==false)
    {
        alert("Please Select one Of AP or STA.");
        return;
    }else
    {
        if(outIsEmpty)
        {
            alert("Plese Insert a Name For Outputs!");
            return;
        }
    }
    document.querySelector("form").submit();
}

