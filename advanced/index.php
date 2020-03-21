<?php
  // Welcome to the advanced tutorial! I did not go over the setup of this
  // in the Blog. Here is a bit of info on how to set this up.
  // Here you can give each friend an "id". When you run
  // curl https://(url).glitch.me/advanced?id=1
  // it will return
  // Info about friend 1: Example, Example 2\n
  // Customise the id, details, and page name to what you want.
  if($_GET["id"] === "1") echo "Info about friend 1: Example, Example 2\n";
  if($_GET["id"] === "2") echo "Info about friend 2: Example, Example 2\n";
  if($_GET["id"] === "3") echo "Info about friend 3: Example, Example 2\n";
?>