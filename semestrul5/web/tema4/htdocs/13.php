<?php
	$studenti = array("nume"=>array("Ion", "George", "Florin"),
						  "an"=>array(1995, 1992, 1999));
	foreach ($studenti as $student) {
		foreach ($student as $element) {
			echo $element . "\t";
		}
		echo "\n";
	}
?>