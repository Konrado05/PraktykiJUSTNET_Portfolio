<?php
if(isset($_SERVER['REDIRECT_URL']))
{
    echo "<!--gg-->";
}
else if(!isset($_SERVER['REDIRECT_URL']))
{
    header('location: strona-glowna');
    exit();
}
?>

<!DOCTYPE html>
<html lang="pl">
    <head>
        <meta charset="utf-8">
        <title>Łask 9 "MiG"</title>
        <meta name="description" content="">
        <meta name="keywords" content='zhp, 9 ŁDSH "MiG", harcerstwo, 32 szczep eskadra, szczep eskadra, Łask, Hufiec Łask'>
        <meta name="author" content="Konrad Skurpel">

        <link href="https://fonts.googleapis.com/css2?family=Ubuntu:ital,wght@1,400;1,700&display=swap" rel="stylesheet">
        <link href="https://fonts.googleapis.com/css2?family=Caveat+Brush&display=swap" rel="stylesheet">

        <link rel="stylesheet" href="style.css" type="text/css"/>
        <link rel=icon href=img/favicon.png type="image/png"/>
    </head>

    <body>
        <header>
            
            <div id="header-logo">
                <img src="img/favicon.png" alt="logo drużyny" />
                <h1>9 ŁDSH "MiG"</h1>
                <div class="clearBoth"></div>
            </div>

        </header>

        <nav>
            <ol>
                <li><a href="strona-glowna">Strona główna</a></li>
                <li><a href="o-nas">O nas</a></li>
                <li><a href="kadra">Kadra</a></li>
                <li><a href="downloady">Downloady</a></li>
            </ol>
        </nav>

        <article id="main">
        <?php
        require_once('main.php');
        ?>
        </article>


        <!--
        <footer>
            
        </footer>
        -->
    </body>
</html>



<!--
<a href="http://lask.zhp.pl" target="_blank"><img src="img/hufiecLogo.png" id="hufiec" alt="ZHP Łask"/></a>
<a href="https://facebook.com/32szczepeskadra/" target="_blank"><img src="img/szczepLogo.png" id="szczep" alt="32 szczep eskadra" /></a>
<a href="https://www.instagram.com/9ldsh_mig/" target="_blank"><img src="img/logo.png" id="druzyna" alt='9 ŁDSH "MiG"' /></a>
<a href="https://zhp.pl"><img src="img/ZHPlogo.png" id="zhp" alt="ZHP" /></a>
-->