<a href="index.php">&lt;Back to select</a><br>

<?php
	require "../connection.php";
	$result = $conn->query("SELECT * FROM locatari WHERE cod_loc=${_GET['cod']}"); // aici am facut si un exemplu cu {}
?>

<!DOCTYPE html>
<html>
	<body>
		<table border="1">
		<tr><th>ID</th><th>Nume si prenume</th><th>Numar persoane</th></tr>
		<?php
			if ($result) {
			    // nu mai folosim while (in loc folosim if) pentru ca stim ca avem cel mult un rezultat, imposibil mai multe
                // asta deoarece codul este primary key si deci si unic
				if ($row = $result->fetch_row()) {
					echo "<tr><td>"; echo $row[0]; 	// cod_loc
					echo "</td><td>"; echo $row[1]; // nume_pren
					echo "</td><td>"; echo $row[2]; // nr_per
					echo "</td></tr>";
				}
			}
		?>
		</table>
	</body>
</html>