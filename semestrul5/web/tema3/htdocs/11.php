<html>
<body>
<?php
echo "<table border=\"2\">";
for($i=1; $i<=100; $i++){ echo "<tr> ";
for($j=1; $j<=100; $j++){ echo "<td>";
echo ($i*$j*100);
echo "</td> ";
}
echo "</tr> ";
}
?>
</table>
</body>
</html>