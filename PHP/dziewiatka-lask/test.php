<?php

echo '<p style="font-size: 27px;">halo...</p><br/><br/>';
print_r($_SERVER);
echo "<br/><br/><br/><br/><br/>";

if(isset($_SERVER['REDIRECT_URL']))
{
    echo '<p style="font-size: 18px; color: blue;">'.$_SERVER['REDIRECT_URL']."</p>";
}
else if(!isset($_SERVER['REDIRECT_URL']))
{
    echo "nie ma przekierowania";
}
else
{
    echo "yyy...";
}
?>