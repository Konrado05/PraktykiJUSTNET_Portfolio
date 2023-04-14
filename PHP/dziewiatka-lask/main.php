<?php
if($_SERVER['REDIRECT_URL']=="/dziewiatka-lask/strona-glowna")
{
    require_once('strona-glowna.php');
}
else if($_SERVER['REDIRECT_URL']=="/dziewiatka-lask/o-nas")
{
    require_once('o-nas.php');
}
else if($_SERVER['REDIRECT_URL']=="/dziewiatka-lask/kadra")
{
    require_once('kadra.php');
}
else if($_SERVER['REDIRECT_URL']=="/dziewiatka-lask/downloady")
{
    require_once('downloady.php');
}
else
{
    require_once('error-wrongPage.php');
}
?>