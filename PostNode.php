<?php
$var1 = ( isset($_POST['var1']) ) ? $_POST['var1'] : null;
$var2 = ( isset($_POST['var2']) ) ? $_POST['var2'] : null;



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
