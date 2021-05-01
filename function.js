/* Toggles the button colour on and off with each click, also calls the function to run on the Particle device */
function lit(clicked)
{
	var button_clicked = document.getElementById(clicked);
	button_clicked.classList.toggle(clicked);
	$.post("https://api.particle.io/v1/devices/{Insert-Device-Name}/toggleLight", { params: clicked, access_token: "{Insert Access-Token}" });
}