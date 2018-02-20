function send_username(){
        name = document.getElementById("username").value;
        if(name.length != 0){
                console.log(name);
                document.getElementById("username").style.display="none";
                document.getElementById("join_button").style.display="none";
                var _n = document.createElement("p");
                var name = document.createTextNode(name);
                _n.appendChild(name);
                parent = document.getElementById("main");
                parent.appendChild(_n);
        }
        else{
                alert("Error: Username cannot be empty!")
        }
}
