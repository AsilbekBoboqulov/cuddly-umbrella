<?php
            include_once "connect.php";
            $surov = "SELECT * FROM `jobs`";
            $query = mysqli_query($connect, $surov);
            while($row=mysqli_fetch_assoc($query))
            {
              
            }
?>
