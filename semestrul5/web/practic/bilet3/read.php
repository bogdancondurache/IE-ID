<a href="index.html">&lt;Home</a><br>

<?php
	require "connection.php";
	$result = $conn->query("SELECT * FROM locatari");	 // query-ul e mereu acelasi, luam toate intrarile din tabela
?>

<!DOCTYPE html>
<html>
	<body>
		<table border="1">
		<tr><th>ID</th><th>Nume si prenume</th><th>Numar persoane</th></tr>
        <!--  Aici folosim th ca sa fie formatat ca header de tabel -->
		<?php
			if ($result) {
			    // aici fetch_row itereaza rand cu rand rezultate si le salveaza pe variabila $row
                // intoarce null cand nu mai sunt rezultate si asta va opri while-ul
				while ($row = $result->fetch_row()) {
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