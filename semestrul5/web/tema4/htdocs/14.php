<?php
session_start();
if (isset($_POST['nume']) && isset($_POST['prenume']) && isset($_POST['medie'])) {
	$_SESSION['nume'][]=$_POST['nume'];
	$_SESSION['prenume'][]=$_POST['prenume'];
	$_SESSION['medie'][]=$_POST['medie'];
}
?>
<html>
<body>
	<table>
	<form method="post">
		<tr>
			<td>Nume</td>
			<td><input name="nume" size=20 /></td>
		</tr>
		<tr>
			<td>Prenume:</td>
			<td><input name="prenume" size=20></td>
		</tr>
		<tr>
			<td>Media:</td>
			<td><input name="medie" size=20 maxlength=2></td>
		</tr>
		<tr>
			<td><input type="submit" value="Adauga"></td>
		</tr>
	</table>
	<table>
		<tr>
			<th>Nume</th>
			<th>Prenume</th>
			<th>Media</th>
		</tr>
		<?php
		$n = count($_SESSION['nume']);
		for ($i = 0; $i < $n; $i++){ ?>
		<tr>
			<td> <?php print $_SESSION['nume'][$i];?> </td>
			<td> <?php print $_SESSION['prenume'][$i];?> </td>
			<td> <?php print $_SESSION['medie'][$i];?> </td>
		</tr>
		<?php } ?>
	</table>
</body>
</html>