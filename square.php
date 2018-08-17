
<!--

//   This code is submitted by
//   Manish Kumar Rai
//   Hackerrank user ID :  mrai8450

-->


<!DOCTYPE html>
<html>
<head>
	<title>Pattern</title>
	<style media="screen">
		body{
			background: #81D4FA;
		}
	</style>
</head>
<body>
	<?php
	$n=25;
	for($i=0;$i<=$n;$i++)
	{
         for($j=0;$j<=$n;$j++)
         {
         	if($i==0 || $i==$n)
         	{
         	echo "*&nbsp;&nbsp;" ;
         }
        else
         {
         	if($j==0 || $j==$n)
         	{
         		echo "*&nbsp;&nbsp;" ;
         	}
         	else
         	{
         		echo "&nbsp;&nbsp;&nbsp;&nbsp;" ;
         	}
         }
     }
         echo "</br>";
	}
	?>
</body>
</html>
