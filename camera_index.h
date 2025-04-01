#ifndef CAMERA_INDEX_H_
#define CAMERA_INDEX_H_

#include <pgmspace.h>

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <title>ESP32 Camera Stream</title>
  <style>
    body { font-family: Arial; text-align: center; margin: 0; }
    img { width: 100%; max-width: 640px; }
    .button { padding: 10px; margin: 5px; font-size: 18px; cursor: pointer; }
  </style>
</head>
<body>
  <h1>ESP32 Camera</h1>
  <p>Click the button below to start the video stream.</p>
  <br>
  <button class="button" onclick="startStream()">Start Stream</button>

  <script>
    function startStream() {
      // Redirect to the /stream route which will start the camera stream
      window.location.href = "/stream";
    }
  </script>
</body>
</html>
)rawliteral";

#endif // CAMERA_INDEX_H_
