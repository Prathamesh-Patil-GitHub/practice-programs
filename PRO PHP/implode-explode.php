<?php
    $array = ["My","name","is","Patil","and","I'm","not","a terrorist"];
    $str = implode(" ",$array);
    echo $str;

    $array2 = explode(" ",$str);
    echo "<br>";
    print_r($array2);
?>