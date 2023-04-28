<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Marksheet</title>
</head>
<style>
    table{
        width: 100%;
        height: 10rem;
        border-collapse: collapse;
        border: 2px solid green;
    }
    table td{
        text-align:center;
    }
</style>
<body>
<?php
    $students = ["Shivam"=>["Python"=> 32, "PHP"=>67], "Chetana"=>["Python"=>89,"PHP"=>78], "Prathamesh"=>["Python"=>99, "PHP"=> 100]];

    echo "<table border='1'>";
    echo "<tr><th>Name</th><th>Python</th><th>PHP</th>";
    foreach($students as $stud_name => $marks){
        echo "<tr>";
        echo "<td> $stud_name</td>";
        foreach($marks as $sub_name=>$sub_marks){
            echo "<td>$sub_marks/100</td>";
        }
        echo "</tr>";
    }
    echo "</table>";
?>
</body>
</html>
