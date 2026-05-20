function register() {
  let username = document.getElementById("username").value;
  let password = document.getElementById("password").value;

  localStorage.setItem("gridguardUser", username);
  localStorage.setItem("gridguardPass", password);

  alert("Account Created Successfully!");
}

function login() {
  let storedUser = localStorage.getItem("gridguardUser");
  let storedPass = localStorage.getItem("gridguardPass");

  let loginUser = document.getElementById("loginUser").value;
  let loginPass = document.getElementById("loginPass").value;

  if (loginUser === storedUser && loginPass === storedPass) {
    alert("Login Successful!");

    window.location.href = "dashboard.html";
  } else {
    alert("Invalid Username or Password");
  }
}

function randomValue(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

function updateGrid() {
  let voltage = randomValue(210, 250);
  let current = randomValue(5, 25);
  let temperature = randomValue(30, 90);

  let voltageElement = document.getElementById("voltage");
  let currentElement = document.getElementById("current");
  let temperatureElement = document.getElementById("temperature");

  if (voltageElement) {
    voltageElement.innerHTML = voltage + " V";
    currentElement.innerHTML = current + " A";
    temperatureElement.innerHTML = temperature + " °C";

    let alerts = "";

    if (voltage > 240) {
      alerts += "<p>⚠ OVERVOLTAGE DETECTED</p>";
    }

    if (current > 15) {
      alerts += "<p>⚠ OVERCURRENT DETECTED</p>";
    }

    if (temperature > 70) {
      alerts += "<p>⚠ TRANSFORMER OVERHEATING</p>";
    }

    if (current > 18 && voltage < 220) {
      alerts += "<p>⚠ POSSIBLE ELECTRICITY THEFT</p>";
    }

    if (alerts === "") {
      alerts = "<p>✅ SYSTEM STABLE</p>";
    }

    document.getElementById("alerts").innerHTML = alerts;
  }
}

setInterval(updateGrid, 2000);

updateGrid();
