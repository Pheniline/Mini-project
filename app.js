function randomValue(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

function updateGrid() {
  let voltage = randomValue(210, 250);
  let current = randomValue(5, 25);
  let temperature = randomValue(30, 90);

  document.getElementById("voltage").innerHTML = voltage + " V";
  document.getElementById("current").innerHTML = current + " A";
  document.getElementById("temperature").innerHTML = temperature + " °C";

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
    alerts = "<p>System Normal</p>";
  }

  document.getElementById("alerts").innerHTML = alerts;
}

setInterval(updateGrid, 2000);

updateGrid();
