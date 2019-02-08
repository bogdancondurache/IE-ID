<a href="index.html">&lt;Home</a><br>

<?php
require "connection.php";

if (isset($_POST['submit'])) {
    $cod = $_POST['cod'];
    $sql = "DELETE FROM locatari WHERE cod_loc=$cod";
    // Alternativa la query era:
    // $sql = "DELETE FROM locatari WHERE cod_loc=${_POST['cod']}";
    // sau:
    // $sql = "DELETE FROM locatari WHERE cod_loc=${_REQUEST['cod']}";
    $result = $conn->query($sql);
    if ($result) {
        if ($conn->affected_rows) {
            echo "Stergere efectuata cu succes";
        } else {
            echo "Nicio inregistrare nu a fost stearsa";
        }
    } else {
        echo "Stergerea nu a reusit!";
    }
}

$data = $conn->query("SELECT * FROM locatari");
?>

<!DOCTYPE html>
<html>
<body>
    <table border="1">
        <tr><th>ID</th><th>Nume si prenume</th><th>Numar persoane</th></tr>
        <?php
        if ($data) {
            while ($row = $data->fetch_row()) {
                echo "<tr><td>"; echo $row[0]; 	// cod_loc
                echo "</td><td>"; echo $row[1]; // nume_pren
                echo "</td><td>"; echo $row[2]; // nr_per
                echo "</td></tr>";
            }
        }
        ?>
    </table>
    <!-- Afisam datele pentru a-i fi mai convenabil userului -->
    <form method="POST">
        Cod pentru a fi sters: <input required type="number" name="cod"><br>
        <input type="submit" name="submit" value="Sterge">
    </form>
</body>
</html>

<?php
if (!isset($sql)) die();
echo "Query executat: $sql";
?>