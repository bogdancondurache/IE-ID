<?php
	$studenti = array("Ion", "George", "Florin");
//	print_r($studenti);
	unset($studenti[1]);
//	print_r($studenti);
	foreach ($studenti as $key=>$value) {
		echo $key . $value . "\n";
	}
	unset($studenti);
	print_r($studenti);
?>