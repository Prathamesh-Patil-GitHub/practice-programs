<html>
    <body>
        <form method='post'>
            Enter first no: <input type="number" name='no1'/>
            Enter second no: <input type="number" name='no2'/>
            <input type="submit" value="Add" name='submit'/>
        </form>
        <?php
            if(isset($_POST['submit'])){
                $no1=$_POST['no1'];
                $no2=$_POST['no2'];
                $sum=$no1+$no2;
                echo "The sum of $no1 $no2 is: ",$sum;
            }
        ?>

    </body>

</html>