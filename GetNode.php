<?php
$var1 = ( isset($_GET['var1']) ) ? $_GET['var1'] : null;
$var2 = ( isset($_GET['var2']) ) ? $_GET['var2'] : null;



#
# Apartir deste ponto podemos utilizar as variáveis sem medo
#
switch($var1){
    case 1:
        header('HTTP/1.1 400 Bad Request');
        break;
    case 2:
        header('HTTP/1.1 201 Codigo2');
        break;

    default:
        break;
}

?>
