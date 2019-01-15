<html>
<body>
<form>
RON: <input type="text" name="ron">
<input type="submit" value="convert">
</form>
<?php
if (isset($_REQUEST['ron'])) {
	$ron = $_REQUEST['ron'];
	$eur = round($ron/4.6, 2);
	echo "$ron RON = $eur EUR";
}
?>
	
</body>
</html>